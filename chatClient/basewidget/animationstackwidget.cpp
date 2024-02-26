#include "animationstackwidget.h"
#include <QPropertyAnimation>
#include <QPainter>
#include <QTransform>

AnimationStackWidget::AnimationStackWidget(QWidget* widget)
    :QStackedWidget(widget)
{
    m_isAnimation = false;
}

// 实现动画效果
void AnimationStackWidget::animation(int pageIndex)
{
    if (m_isAnimation) {
        return;
    }
    //frameRect()返回当前部件的边框矩形
    int offsetX = frameRect().width();
    int offsetY = frameRect().height();
    widget(pageIndex)->setGeometry(0, 0, offsetX, offsetY);

    m_pageIndex = pageIndex;
    // 创建动画
    QPropertyAnimation* ani = new QPropertyAnimation(this, "rotateVal");
    // 设置动画的持续时间
    ani->setDuration(700);
    ani->setEasingCurve(QEasingCurve::Linear);
    // 设置动画起始值,结束值
    ani->setStartValue(m_startVal);
    ani->setEndValue(m_endVal);
    QObject::connect(ani, &QPropertyAnimation::valueChanged, this, &AnimationStackWidget::onValueChanged);
    QObject::connect(ani, &QPropertyAnimation::finished, this, &AnimationStackWidget::onFinished);
    currentWidget()->hide();
    m_isAnimation = true;
    ani->start();
}

AnimationStackWidget::~AnimationStackWidget()
{
    ;
}


void AnimationStackWidget::onValueChanged()
{
    repaint();
}

void AnimationStackWidget::onFinished()
{
    // 动画结束
    widget(m_pageIndex)->show();
    widget(m_pageIndex)->raise(); // 将该控件显示在最上层

    setCurrentWidget(widget(m_pageIndex));

    //    repaint();
    m_isAnimation = false;
}


void AnimationStackWidget::paintEvent(QPaintEvent* event)
{
    if (m_isAnimation) {
        QPainter p(this);
        if (m_rotateVal >= 0 && m_rotateVal <= 90 && m_pageIndex == 1) {
            QPixmap pix(currentWidget()->size());
            currentWidget()->render(&pix);
            QTransform transform;
            transform.translate(width() / 2, 0);
            transform.rotate(m_rotateVal, Qt::YAxis);
            p.setTransform(transform);
            p.drawPixmap(-1 * width() / 2, 0, pix);
        } else if (m_rotateVal > 90 && m_rotateVal <= 180) {
            QPixmap pix(widget(m_pageIndex)->size());
            widget(m_pageIndex)->render(&pix);
            QTransform transform;
            transform.translate(width() / 2, 0);
            transform.rotate(m_rotateVal + 180, Qt::YAxis);
            p.setTransform(transform);
            p.drawPixmap(-1 * width() / 2, 0, pix);
        } else if (m_rotateVal > -180 && m_rotateVal <= -90) {
            QPixmap pix(widget(m_pageIndex)->size());
            widget(m_pageIndex)->render(&pix);
            QTransform transform;
            transform.translate(width() / 2, 0);
            transform.rotate(m_rotateVal + 180, Qt::YAxis);
            p.setTransform(transform);
            p.drawPixmap(-1 * width() / 2, 0, pix);
        } else if (m_rotateVal > -90 && m_rotateVal <= 0 && m_pageIndex == 0) {
            QPixmap pix(currentWidget()->size());
            currentWidget()->render(&pix);
            QTransform transform;
            transform.translate(width() / 2, 0);
            transform.rotate(m_rotateVal, Qt::YAxis);
            p.setTransform(transform);
            p.drawPixmap(-1 * width() / 2, 0, pix);
        }
    } else {
        QWidget::paintEvent(event);
    }
}

