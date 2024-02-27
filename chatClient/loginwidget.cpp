#include "loginwidget.h"
#include "ui_loginwidget.h"
#include "mainwindow.h"
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include "clientsocket.h"
#include <QDebug>
#include "unit.h"
#include "global.h"


LoginWidget::LoginWidget(QWidget *parent) :
    CustomMoveWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);

    myHelper::setStyle("default");   //设置qss样式的函数

    //去掉Qt自带的标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    //使透明生效
    this->setAttribute(Qt::WA_TranslucentBackground);

    ui->stackedWidget->setCurrentIndex(0);

    //给lineEditUser添加图片
    ui->lineEditUser->SetIcon(QPixmap(":/resource/common/ic_user.png"));
    ui->lineEditPasswd->SetIcon(QPixmap(":/resource/common/ic_lock.png"));

    //创建连接
    m_tcpSocket = new ClientSocket();

    connect(m_tcpSocket, &ClientSocket::signalStatus, this, &LoginWidget::on_signalStatus);
    connect(m_tcpSocket, &ClientSocket::signalMessage, this, &LoginWidget::on_signalMessage);

    m_tcpSocket->CheckConnected(); // 如果没有连接就连接默认ip和端口,连接服务器


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
    QString username = ui->lineEditUser->text();
    QString password = ui->lineEditPasswd->text();
    QJsonObject json;
    json.insert("name", username);
    json.insert("passwd", password);

    m_tcpSocket->SltSendMessage(17, json);

}

void LoginWidget::on_signalMessage(const quint8& type, const QJsonValue& datacal)
{
}

void LoginWidget::on_signalStatus(const quint8& state)
{
    switch (state) {
    case 0x01:
        // 连接成功
        ui->labelWinTitle->setText("已连接服务器~");
        break;
    case LoginSuccess:
    {
        // 登录成功
        MainWindow* mainwindow = new MainWindow;
        mainwindow->show();
        this->hide();
    }
        break;
    case LoginRepeat:
        //用户已经在线
        break;
    case LoginPasswdError:
        //用户未注册
        break;
    default:
        break;
    }
}







