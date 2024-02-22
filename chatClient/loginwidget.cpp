#include "loginwidget.h"
#include "ui_loginwidget.h"
#include <QFile>

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
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
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

//关闭按钮槽函数
void LoginWidget::on_btnWinClose_clicked()
{
    close();
}

