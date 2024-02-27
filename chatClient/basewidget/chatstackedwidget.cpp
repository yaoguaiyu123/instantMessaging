#include "chatstackedwidget.h"
#include <QPixmap>
#include <QTransform>

ChatStackedWidget::ChatStackedWidget(QWidget *parent)
    : QStackedWidget(parent)
{
    m_isAnimating = false;
    m_currentValue = 0;
    m_currentIndex = 0;
    m_previousIndex = 0;

    m_animation = new QPropertyAnimation(this, QByteArray());
    m_animation->setDuration(300);
    m_animation->setEasingCurve(QEasingCurve::Linear);
    m_animation->setStartValue(0);
    m_animation->setEndValue(0);

    connect(m_animation, SIGNAL(valueChanged(QVariant)), SLOT(valueChanged(QVariant)));
    connect(m_animation, SIGNAL(finished()), SLOT(animationFinished()));
}

ChatStackedWidget::~ChatStackedWidget()
{
    delete m_animation;
}

QString ChatStackedWidget::getClassName()
{
    return staticMetaObject.className();
}

void ChatStackedWidget::paintEvent(QPaintEvent * event)
{
    if(m_isAnimating)
    {
        QPainter painter(this);
        QTransform transform;
        renderCurrentWidget(painter, transform);
        renderPreviousWidget(painter, transform);
    }
    else
    {
        QWidget::paintEvent(event);
    }
}

void ChatStackedWidget::renderPreviousWidget(QPainter &painter, QTransform &transform)
{
    QWidget *w = widget(m_previousIndex);
    QPixmap pixmap( w->size() );
    pixmap.fill(Qt::transparent);
    w->setAttribute(Qt::WA_TranslucentBackground, true);
    w->render(&pixmap);
    w->setAttribute(Qt::WA_TranslucentBackground, false);

    Q_UNUSED(transform);
    switch(m_type)
    {
    case BottomToTop :
    {
        painter.drawPixmap(0, height()/2, pixmap);
        break;
    }
    case TopToBottom :
    {
        painter.drawPixmap(0, -height()/2, pixmap);
        break;
    }
    case LeftToRight :
    {
        painter.drawPixmap(width()/2, 0, pixmap);
        break;
    }
    case RightToLeft :
    {
        painter.drawPixmap(-width()/2, 0, pixmap);
        break;
    }
    default: break;
    }
}

void ChatStackedWidget::renderCurrentWidget(QPainter &painter, QTransform &transform)
{
    QWidget *w = widget(m_currentIndex);
    QPixmap pixmap( w->size() );
    pixmap.fill(Qt::transparent);
    w->setAttribute(Qt::WA_TranslucentBackground, true);
    w->render(&pixmap);
    w->setAttribute(Qt::WA_TranslucentBackground, false);

    switch(m_type)
    {
    case BottomToTop :
    {
        transform.translate(0, m_currentValue);
        painter.setTransform(transform);
        painter.drawPixmap(0, -height()/2, pixmap);
        break;
    }
    case TopToBottom :
    {
        transform.translate(0, m_currentValue);
        painter.setTransform(transform);
        painter.drawPixmap(0, height()/2, pixmap);
        break;
    }
    case LeftToRight :
    {
        transform.translate(m_currentValue, 0);
        painter.setTransform(transform);
        painter.drawPixmap(-width()/2, 0, pixmap);
        break;
    }
    case RightToLeft :
    {
        transform.translate(m_currentValue, 0);
        painter.setTransform(transform);
        painter.drawPixmap(width()/2, 0, pixmap);
        break;
    }
    default: break;
    }
}

void ChatStackedWidget::start(int index)
{
    if(m_isAnimating)
    {
        return;
    }
    m_previousIndex = m_currentIndex;
    m_currentIndex = index;

    int offsetx = frameRect().width();
    int offsety = frameRect().height();
    widget(m_currentIndex)->setGeometry(0, 0, offsetx, offsety);

    currentWidget()->hide();
    m_isAnimating = true;
    m_animation->start();
}

void ChatStackedWidget::setIndex(int previous, int current)
{
    m_currentIndex = current;
    m_previousIndex = previous;
}

void ChatStackedWidget::setLength(int length, AnimationType type)
{
    switch(m_type = type)
    {
    case BottomToTop :
    case LeftToRight :
    {
        m_animation->setStartValue(-length/2);
        m_animation->setEndValue(length/2);
        break;
    }
    case TopToBottom :
    case RightToLeft :
    {
        m_animation->setStartValue(length/2);
        m_animation->setEndValue(-length/2);
        break;
    }
    default: break;
    }
}

void ChatStackedWidget::setDuration(int duration)
{
    m_animation->setDuration(duration);
}

int ChatStackedWidget::getDuration() const
{
    return m_animation->duration();
}

void ChatStackedWidget::valueChanged(const QVariant &value)
{
    m_currentValue = value.toFloat();
    update();
}

void ChatStackedWidget::animationFinished()
{
    m_currentValue = 0;
    m_isAnimating = false;
    QWidget *w = widget(m_currentIndex);
    w->show();
    w->raise();
    setCurrentWidget( w );
    update();
}
