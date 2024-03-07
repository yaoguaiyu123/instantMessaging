#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//主界面类
#include <QMainWindow>
#include "customwidget.h"
#include <QButtonGroup>
#include <QSystemTrayIcon>
#include "clientsocket.h"
#include <QJsonObject>
#include <QJsonValue>

class QQCell;
QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
QT_END_NAMESPACE

    class MainWindow : public CustomMoveWidget
{
    Q_OBJECT

public:
    MainWindow(const QJsonValue &jsonVal, QWidget *parent = nullptr);
    ~MainWindow();
    void setScoket(ClientSocket* socket, const QString& name);
    void InitQQListMenu();

private slots:
    void on_btnWinClose_clicked();
    void SltMainPageChanged(int index);
    void SltSystemTrayIconActivated(QSystemTrayIcon::ActivationReason reason);
    void SltTrayIconMenuClicked(QAction*);
    void SltQuitapp();
    void SltTcpReply(const quint8& type, const QJsonValue& datacal);
    void SltTcpStatus(const quint8& state);
    void on_btnWinMin_clicked();
    // 右键菜单
    void onAddFriendMenuDidSelected(QAction *action);
    void onGroupPopMenuDidSelected(QAction *action);
    void onChildPopMenuDidSelected(QAction *action);    /// 这边进行了修改
    // 好友列表点击
    void SltFriendsClicked(QQCell *cell);
    // 群组列表点击
    void SltGroupsClicked(QQCell *cell);
    // 关闭与好友的聊天窗口
    void SltFriendChatWindowClose();

private:
    Ui::MainWindow *ui;
    QButtonGroup* m_buttonGroup;
    QString m_head;
    void InitSystemTrayIcon(); // 初始化托盘
    QSystemTrayIcon* m_systemTray;
    ClientSocket* m_tcpSocket;
    QString m_username;
    void PraseAddFriendReply(const QJsonValue &datavalue);
    void PraseAddFriendRequestReply(const QJsonValue& dataval);

protected:

};
#endif // MAINWINDOW_H
