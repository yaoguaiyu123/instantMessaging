#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QFile>

// socket通信类
class ClientSocket : public QObject
{
    Q_OBJECT
public:
    explicit ClientSocket(QObject *parent = 0);
    ~ClientSocket();

    // 获取当前用户的ID
    int GetUserId() const;
    void SetUserId(const int &id);

    void CheckConnected();
    void CloseConnected();

    // 连接服务器
    void ConnectToHost(const QString &host, const int &port);
    void ConnectToHost(const QHostAddress &host, const int &port);
signals:
    void signalMessage(const quint8 &type, const QJsonValue &dataVal);
    void signalStatus(const quint8 &state);
public slots:
    // socket消息发送封装
    void SltSendMessage(const quint8 &type, const QJsonValue &dataVal);
//    //接收到chatwindow信号(聊天信息)的槽函数
//    void onSendMessage(const qint8 type, const QJsonValue& json);
//    //接收到chatwindow信号(好友关闭)的槽函数
//    void onFriendChatWindowClose();
private:
    // tcpsocket
    QTcpSocket *m_tcpSocket;
    // 用户ID
    int m_nId;
private slots:
    // 与服务器断开链接
    void SltDisconnected();
    // 链接上服务器
    void SltConnected();
    // tcp消息处理
    void SltReadyRead();

private:
    void ParseLogin(QJsonValue dataval);  //登录函数

private:
};


#endif //TCPCLIENT_H
