#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H
//登录页面
//页面的样式使用了ui界面文件和qss
//用到了Qt动画,实现登录页面的stackWidget的翻转动画
#include <QWidget>
#include "customwidget.h"

namespace Ui {
class LoginWidget;
}

class LoginWidget : public CustomMoveWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private slots:
    void on_btnWinClose_clicked();
    void on_btnWinMenu_clicked();
    void on_btnCancel_clicked();
    void on_btnWinClose_2_clicked();

    void on_btnLogin_clicked();

private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWIDGET_H
