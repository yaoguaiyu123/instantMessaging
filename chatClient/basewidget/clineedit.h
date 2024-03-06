#ifndef CLINEEDIT_H
#define CLINEEDIT_H

#include <QLineEdit>
#include <QEvent>

///这里可以看成是一个外部的依赖
///我把除了QIconLineEdit之外的都注释掉了

class QLabel;

//class QIPLineEdit : public QLineEdit
//{
//	Q_OBJECT

//public:
//	QIPLineEdit(QWidget *parent = 0);
//	~QIPLineEdit();

//	void setText(const QString &strIP);
//	QString text() const;
//protected:
//	bool eventFilter(QObject *obj, QEvent *ev);

//	int getIndex(QLineEdit *pEdit);
//	bool isTextValid(const QString &strIP);
//private:
//	QLineEdit *m_lineEidt[4];
//};

//class QMacLineEdit : public QLineEdit
//{
//    Q_OBJECT

//public:
//    QMacLineEdit(QWidget *parent = 0);
//    ~QMacLineEdit();

//    void setText(const QString &strMac);
//    QString text() const;
//protected:
////    void paintEvent(QPaintEvent *event);
//    bool eventFilter(QObject *obj, QEvent *ev);

//    int getIndex(QLineEdit *pEdit);
//    bool isTextValid(const QString &strIP);
//private:
//    QLineEdit *m_lineEidt[6];
//};

//带图片的LineEdit
class QIconLineEdit : public QLineEdit {
    Q_OBJECT
public:
    QIconLineEdit(QWidget *parent = 0);
    ~QIconLineEdit();

    void SetIcon(const QPixmap &pixmap);
private:
    QLabel *labelPixmap;
};

#endif // QIPLINEEDIT_H
