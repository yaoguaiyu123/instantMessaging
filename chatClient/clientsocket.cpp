#include "clientsocket.h"
//#include "databasemagr.h"

#include <QFile>
#include <QDebug>
#include <QHostAddress>
#include <QDataStream>
#include <QApplication>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>
#include "unit.h"
#include "myapp.h"

//默认的ip地址和端口
//#define SERVER_IP "192.168.2.199"
//#define SERVER_IP "106.85.77.102"
//#define SERVER_IP "127.0.0.1"
//#define SERVER_PORT 60100   //消息服务器的端口号
//这里不再需要，而是使用myapp.h中的定义

ClientSocket::ClientSocket(QObject *parent) :
    QObject(parent)
{
    m_nId = -1;

    m_tcpSocket = new QTcpSocket(this);

    connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(SltReadyRead()));
    connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(SltConnected()));
    connect(m_tcpSocket, SIGNAL(disconnected()), this, SLOT(SltDisconnected()));
}

ClientSocket::~ClientSocket()
{
}

int ClientSocket::GetUserId() const
{
    return  m_nId;
}

void ClientSocket::SetUserId(const int &id)
{
    m_nId = id;
}

//检查连接
void ClientSocket::CheckConnected()
{
    if (m_tcpSocket->state() != QTcpSocket::ConnectedState)
    {
        m_tcpSocket->connectToHost(QString(MyApp::m_strHostAddr), MyApp::m_nMsgPort);
    }
}


//断开连接
void ClientSocket::CloseConnected()
{
    if (m_tcpSocket->isOpen()) {
        m_tcpSocket->abort();
    }
}

//连接服务器
void ClientSocket::ConnectToHost(const QString &host, const int &port)
{
    if (m_tcpSocket->isOpen()) {
        m_tcpSocket->abort();
    }
    m_tcpSocket->connectToHost(host, port);
}

//连接服务器
void ClientSocket::ConnectToHost(const QHostAddress &host, const int &port)
{
    if (m_tcpSocket->isOpen()) {
        m_tcpSocket->abort();
    }
    m_tcpSocket->connectToHost(host, port);
}


void ClientSocket::SltSendMessage(const quint8 &type, const QJsonValue &dataVal)
{
    // 连接服务器
    if (!m_tcpSocket->isOpen()) {
        m_tcpSocket->connectToHost(QString(MyApp::m_strHostAddr), MyApp::m_nMsgPort);
        m_tcpSocket->waitForConnected(1000);
    }
    // 超时1s后还是连接不上，直接返回
    if (!m_tcpSocket->isOpen()) {
        return;
    }

    // 构建 Json 对象
    QJsonObject json;
    json.insert("type", type);
    json.insert("from", m_nId);
    json.insert("data", dataVal);

    // 构建 Json 文档
    QJsonDocument document;
    document.setObject(json);
    qDebug() << "m_tcpSocket->write:" << document.toJson(QJsonDocument::Compact);
    m_tcpSocket->write(document.toJson(QJsonDocument::Compact));
}


void ClientSocket::SltDisconnected()
{
    qDebug() << "has disconnecetd";
    m_tcpSocket->abort();
}


void ClientSocket::SltConnected()
{
    emit signalStatus(0x01);  //连接成功
    qDebug() << "has connecetd";
}


// 处理服务器消息
void ClientSocket::SltReadyRead()
{
    QByteArray byRead = m_tcpSocket->readAll();
    QJsonParseError jsonError;
    // 转换为JSON文档
    QJsonDocument document = QJsonDocument::fromJson(byRead, &jsonError);
    // 解析未发生错误
    if (!document.isNull() && jsonError.error == QJsonParseError::NoError) {
        if (document.isObject()) {
            // 如果是一个对象就转化为对象
            QJsonObject jsonobj = document.object();
            QJsonValue dataval = jsonobj.value("data");
            int nFrom = jsonobj.value("from").toInt();
            int nType = jsonobj.value("type").toInt();
            switch (nType) {
            case Register:
                // 注册
                break;
            case Login:
                // 登录
                ParseLogin(dataval);
                break;
            case AddFriend:
                emit signalMessage(AddFriend,dataval);
                break;
            case AddFriendRequist:
                emit signalMessage(AddFriendRequist,dataval);
                break;
            }

        }
    }

}


void ClientSocket::ParseLogin(QJsonValue dataval)
{
    QJsonObject dataobj = dataval.toObject();
    int id = dataobj.value("id").toInt();
    int code = dataobj.value("code").toInt();
    QString msg = dataobj.value("msg").toString();
    if (id > 0 && code == 0 && msg == "ok") {
        // 登录成功
        qDebug() << "登录成功,id = " << id;
        m_nId = id;
        emit signalMessage(LoginSuccess,dataval);
    } else {
        if (code == -2) {
            qDebug() << "登录失败,用户已在线";
            emit signalStatus(LoginRepeat);
        }else if(code == -1){
            qDebug() << "登录失败,用户名或密码错误";
            emit signalStatus(LoginPasswdError);
        }
    }
}


//接收到chatwindow信号(聊天信息)的槽函数
void ClientSocket::onSendMessage(const qint8 type, const QJsonValue& json){

}

//接收到chatwindow信号(好友关闭)的槽函数
void ClientSocket::onFriendChatWindowClose(){

}


