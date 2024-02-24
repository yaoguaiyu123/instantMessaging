#include "loginwidget.h"
#include "ui_loginwidget.h"
#include "mainwindow.h"
#include <QFile>

LoginWidget::LoginWidget(QWidget *parent) :
    CustomMoveWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
    // 加载样式表(qss文件)
    QFile file(":/qss/resource/qss/default.css");
    file.open(QIODevice::ReadOnly);
    //这里的qApp指的是整个应用
    qApp->setStyleSheet(file.readAll());
    file.close();
    //去掉Qt自带的标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    //使透明生效
    this->setAttribute(Qt::WA_TranslucentBackground);

    ui->stackedWidget->setCurrentIndex(0);

    //给lineEditUser添加图片
    ui->lineEditUser->SetIcon(QPixmap(":/resource/common/ic_user.png"));
    ui->lineEditPasswd->SetIcon(QPixmap(":/resource/common/ic_lock.png"));
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

//widget1关闭按钮槽函数
void LoginWidget::on_btnWinClose_clicked()
{
    close();
}

// 点击页面翻转按钮
void LoginWidget::on_btnWinMenu_clicked()
{
    ui->stackedWidget->setStartVal(0);
    ui->stackedWidget->setEndVal(180);
    ui->stackedWidget->animation(1);
}

// 取消按钮，执行页面翻转
void LoginWidget::on_btnCancel_clicked()
{
    ui->stackedWidget->setStartVal(0);
    ui->stackedWidget->setEndVal(-180);
    ui->stackedWidget->animation(0);
}

//widget2关闭按钮槽函数
void LoginWidget::on_btnWinClose_2_clicked()
{
    close();
}

// 登录按钮
void LoginWidget::on_btnLogin_clicked()
{
    MainWindow *mainwindow = new MainWindow;
    mainwindow->show();
    this->hide();
}








