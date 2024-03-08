#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "chatstackedwidget.h"
#include <QMenu>
#include <QAction>
#include "qqcell.h"
#include "global.h"
#include <QDebug>
#include "databasemagr.h"
#include "qqlist/qqlistwidget.h"
#include "chatwindow.h"



MainWindow::MainWindow(const QJsonValue &jsonVal,QWidget *parent)
    : CustomMoveWidget(parent)
    , ui(new Ui::MainWindow)
{
//    qDebug() << "MainWindow中输出:" << jsonVal;
    ui->setupUi(this);
    //去掉Qt自带的标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    m_buttonGroup = new QButtonGroup();
    m_buttonGroup->addButton(ui->btnFrind, 0); // 将ui中的按钮加入到buttonGroup中
    m_buttonGroup->addButton(ui->btnGroup, 1);
    m_buttonGroup->addButton(ui->btnConversation, 2);
    m_buttonGroup->addButton(ui->btnApplay, 3);
    connect(m_buttonGroup, &QButtonGroup::idClicked, this, &MainWindow::SltMainPageChanged);
    InitSystemTrayIcon();
    ui->GCStackedWidget->setCurrentIndex(0);
    // 初始化姓名和头像
    if (jsonVal.isObject()) {
        QJsonObject object = jsonVal.toObject();
        QString head = object.value("head").toString();
        m_head = head;
        ui->widgetHead->setStyleSheet(tr("border-image:url(:/resource/head/%1)").arg(m_head));
        // 更新全局用户设置
        MyApp::m_nId = object.value("id").toInt();
        MyApp::m_strHeadPath = head;
        MyApp::m_strUserName = m_username;
    }
    //初始化好友列表
    InitQQListMenu();
}


MainWindow::~MainWindow()
{
    delete ui;
}

// 关闭按钮被点击
void MainWindow::on_btnWinClose_clicked()
{
    close();
}

void MainWindow::SltMainPageChanged(int index){

    // 切换面板
    static int s_nIndex = 0;    //记录当前ui->GCStackedWidget选中的页的下标,静态局部变量，生命周期为整个程序的生命周期
    if (s_nIndex == index) {
        return; // 不切换
    }
    ui->GCStackedWidget->setLength(ui->GCStackedWidget->width(),
    index > s_nIndex ? ChatStackedWidget::RightToLeft : ChatStackedWidget::LeftToRight);
    ui->GCStackedWidget->start(index);

    s_nIndex = index;

}

// 初始化托盘
void MainWindow::InitSystemTrayIcon()
{
    m_systemTray = new QSystemTrayIcon(this);
    m_systemTray->setIcon(QIcon(":/resource/background/app.png"));
    QMenu* menu = new QMenu(this);
    menu->addAction("我在线上");
    menu->addAction("离线");
    menu->addSeparator();
    menu->addAction("显示主面板");
    menu->addSeparator();
    menu->addAction("退出");
    m_systemTray->setContextMenu(menu);
    m_systemTray->show();
    connect(m_systemTray, &QSystemTrayIcon::activated, this, &MainWindow::SltSystemTrayIconActivated);
    connect(menu, &QMenu::triggered, this, &MainWindow::SltTrayIconMenuClicked);
}

void MainWindow::SltSystemTrayIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        if (!this->isVisible()) {
            this->show();
        }
        break;
    }
}

void MainWindow::SltTrayIconMenuClicked(QAction* action)
{
    if (action->text() == "退出") {
        this->hide();
        QTimer::singleShot(500, this, &MainWindow::SltQuitapp); // 500ms之后调用函数
    } else if (action->text() == "显示主面板") {
        this->show();
    } else if (action->text() == "我在线上") {
        m_tcpSocket->CheckConnected();
    } else if (action->text() == "离线") {
        // 和服务端断开连接
        m_tcpSocket->CloseConnected();
    }
}

void MainWindow::SltQuitapp()
{
    qApp->quit();
}

//设置socket和用户名
void MainWindow::setScoket(ClientSocket* socket, const QString& name)
{
    if (socket != nullptr) {
        m_tcpSocket = socket;
        connect(m_tcpSocket, &ClientSocket::signalStatus, this, &MainWindow::SltTcpStatus);
        connect(m_tcpSocket, &ClientSocket::signalMessage, this, &MainWindow::SltTcpReply);
    }
    m_username = name;
    MyApp::m_strUserName = name;
    ui->labelUser->setText(m_username);
    //获取好友列表
    QJsonArray jsonArray = DataBaseMagr::Instance()->GetMyFriend(MyApp::m_nId);
    m_tcpSocket->SltSendMessage(GetMyFriends,jsonArray);
}

//处理clientScoket类的信号
void MainWindow::SltTcpReply(const quint8& type, const QJsonValue& dataval)
{
    switch (type) {
    case AddFriend: // 服务器返回 主动添加好友的用户
        PraseAddFriendReply(dataval);
        break;
    case AddFriendRequist:  //服务器通知被添加的好友
        PraseAddFriendRequestReply(dataval);
        break;
    case GetMyFriends: // 加载好友列表
        PraseInitFriendList(dataval);
        break;

    default:
        break;
    }
}

void MainWindow::PraseAddFriendReply(const QJsonValue& datavalue)
{
    if (datavalue.isObject()) {
        QJsonObject object = datavalue.toObject();
        QString name = object.value("name").toString();
        int status = object.value("status").toInt();
        int id = object.value("id").toInt();
        QString head = object.value("head").toString();
        QQCell* cell = new QQCell;
        cell->groupName = QString("我的好友");
        cell->iconPath = ":/resource/head/"+ head;
        cell->type = QQCellType_Child;
        cell->name = name;
        cell->subTitle = QString("当前用户状态:%1").arg(OnLine == status ? "在线" : "离线");
        cell->id = id;
        cell->status = status;
        ui->frindListWidget->insertQQCell(cell);
        // 加入数据库
        DataBaseMagr::Instance()->AddFriend(cell->id, MyApp::m_nId, cell->name);

    }
}

void MainWindow::PraseAddFriendRequestReply(const QJsonValue& dataval)
{
    if (dataval.isObject()) {
        QJsonObject object = dataval.toObject();
        QString name = object.value("name").toString();
        int id = object.value("id").toInt();
        QString head = object.value("head").toString();
        QString msg = object.value("msg").toString();
        if (!DataBaseMagr::Instance()->isMyFriend(MyApp::m_nId, name)) {
            QQCell* cell = new QQCell;
            cell->groupName = QString("我的好友");
            cell->iconPath = ":/resource/head/" + head;
            cell->type = QQCellType_Child;
            cell->name = name;
            cell->subTitle = QString("当前用户状态:在线");
            cell->id = id;
            cell->status = OnLine;
            ui->frindListWidget->insertQQCell(cell);
            // 更新数据库
            DataBaseMagr::Instance()->AddFriend(cell->id, MyApp::m_nId, name);
        }
    }
}

// 获取好友列表,加载已经添加的好友
void MainWindow::PraseInitFriendList(const QJsonValue& dataval)
{
    qDebug() << "正在获取好友列表";
    if (dataval.isArray()) {
        QJsonArray array = dataval.toArray();
        for (int i = 0; i < array.size(); ++i) {
            QJsonValue value = array.at(i);
            QJsonObject object;
            if (value.isObject()) {
                object = value.toObject();
            } else {
                return;
            }
            QString name = object.value("name").toString();
            int status = object.value("status").toInt();
            int id = object.value("id").toInt();
            QString head = object.value("head").toString();
            QQCell* cell = new QQCell;
            cell->groupName = QString("我的好友");
            cell->iconPath = ":/resource/head/"+ head;
            cell->type = QQCellType_Child;
            cell->name = name;
            cell->subTitle = QString("当前用户状态:%1").arg(OnLine == status ? "在线" : "离线");
            cell->id = id;
            cell->status = status;
            ui->frindListWidget->insertQQCell(cell);
        }
    }

}



void MainWindow::SltTcpStatus(const quint8& state){

}

void MainWindow::on_btnWinMin_clicked()
{
    hide();
}


//添加好友菜单列表
void MainWindow::InitQQListMenu()
{
    //设置菜单
    //设置组菜单
    QMenu *addFriend = new QMenu(this);
    addFriend->addAction(tr("添加好友"));
    addFriend->addAction(tr("刷新"));
    addFriend->addSeparator();
    addFriend->addAction(tr("删除该组"));
    connect(addFriend, SIGNAL(triggered(QAction*)), this, SLOT(onAddFriendMenuDidSelected(QAction*)));
    ui->frindListWidget->setGroupPopMenu(addFriend);

           // 设置子菜单
    QMenu *childMenu = new QMenu(this);
    childMenu->addAction(tr("发送即时消息"));
    childMenu->addSeparator();
    childMenu->addAction("移动至黑名单");
    childMenu->addAction("删除联系人");

    QMenu *groupListMenu = new QMenu(tr("移动联系人至"));
    childMenu->addMenu(groupListMenu);

           // childMenu->addAction(tr("创建讨论组"));
    connect(childMenu, SIGNAL(triggered(QAction*)), this, SLOT(onChildPopMenuDidSelected(QAction*)));
    ui->frindListWidget->setChildPopMenu(childMenu);

   //添加默认项
   //好友列表
    QQCell *myFriend = new QQCell;
    myFriend->groupName = QString(tr("我的好友"));
    myFriend->isOpen = false;
    myFriend->type = QQCellType_Group;
    myFriend->name = QString(tr("我的好友"));
    myFriend->subTitle = QString("(0/0)");
    ui->frindListWidget->insertQQCell(myFriend);

    QQCell *blacklist = new QQCell;
    blacklist->groupName = QString(tr("黑名单"));
    blacklist->isOpen = false;
    blacklist->type = QQCellType_Group;
    blacklist->name = QString(tr("黑名单"));
    blacklist->subTitle = QString("(0/0)");
    ui->frindListWidget->insertQQCell(blacklist);

    connect(ui->frindListWidget, SIGNAL(onChildDidDoubleClicked(QQCell*)), this, SLOT(SltFriendsClicked(QQCell*)));

           //组列表
    QMenu *myGroupMenu = new QMenu(this);
    myGroupMenu->addAction(tr("创建讨论组"));
    myGroupMenu->addAction(tr("加入讨论组"));
    myGroupMenu->addAction(tr("删除该组"));
    myGroupMenu->addSeparator();
    connect(myGroupMenu, SIGNAL(triggered(QAction*)), this, SLOT(onGroupPopMenuDidSelected(QAction*)));
    ui->groupListWidget->setGroupPopMenu(myGroupMenu);
    //设置子菜单
    QMenu *groupChildMen = new QMenu(this);
    groupChildMen->addAction(tr("发送即时消息"));
    ui->groupListWidget->setChildPopMenu(groupChildMen);

           //添加默认项
    QQCell *groupCell = new QQCell;
    groupCell->groupName = QString(tr("我的群组"));
    groupCell->isOpen = false;
    groupCell->type = QQCellType_GroupEx;
    groupCell->name = QString(tr("讨论组"));
    groupCell->subTitle = QString("(0/0)");
    ui->groupListWidget->insertQQCell(groupCell);

    connect(ui->groupListWidget, SIGNAL(onChildDidDoubleClicked(QQCell*)), this, SLOT(SltGroupsClicked(QQCell*)));
}


//添加好友
void MainWindow::onAddFriendMenuDidSelected(QAction *action)
{
    if (!action->text().compare(tr("添加好友")))
    {
        QString text = CInputDialog::GetInputText(this, "新的好友");

        if (!text.isEmpty()) {
            // 首先判断该用户是否已经是我的好友了
            if (DataBaseMagr::Instance()->isMyFriend(MyApp::m_nId, text)) {
                CMessageBox::Infomation(this, "该用户已经是你的好友了！");
                return;
            }

            // 构建 Json 对象
            //
            QJsonObject json;
            json.insert("id", m_tcpSocket->GetUserId());
            json.insert("name", text);
            m_tcpSocket->SltSendMessage(AddFriend, json);
        }
    }
    else if (!action->text().compare(tr("刷新")))
    {
//        // 上线的时候获取当前好友的状态
        QJsonArray friendArr = DataBaseMagr::Instance()->GetMyFriend(MyApp::m_nId);
//        // 组织Jsonarror
        m_tcpSocket->SltSendMessage(RefreshFriends, friendArr);
    }
    else if (!action->text().compare(tr("删除该组")))
    {
        qDebug() << "delete group";
    }
}

//创建讨论组
void MainWindow::onGroupPopMenuDidSelected(QAction *action)
{
    if (!action->text().compare(tr("创建讨论组")))
    {
        QString text = CInputDialog::GetInputText(this, "我的朋友们");
        if (!text.isEmpty()) {

            // 构建 Json 对象
            QJsonObject json;
            json.insert("id", m_tcpSocket->GetUserId());
            json.insert("name", text);

            m_tcpSocket->SltSendMessage(CreateGroup, json);
        }
    }
    else if (!action->text().compare(tr("加入讨论组")))
    {
        QString text = CInputDialog::GetInputText(this, "我的朋友们");
        if (!text.isEmpty()) {
            // 首先判断是否已经添加该群组了
//            if (DataBaseMagr::Instance()->isInGroup(text)) {
//                CMessageBox::Infomation(this, "你已经添加该群组了！");
//                return;
//            }

            // 构建 Json 对象
            QJsonObject json;
            json.insert("id", MyApp::m_nId);
            json.insert("name", text);

            m_tcpSocket->SltSendMessage(AddGroup, json);
        }
    }
    else if (!action->text().compare(tr("删除该组")))
    {
        qDebug() << "delete group";
    }
}

void MainWindow::onChildPopMenuDidSelected(QAction *action)
{
    QQCell *cell = ui->frindListWidget->GetRightClickedCell();
    if (NULL == cell) return;

    if (!action->text().compare(tr("发送即时消息")))
    {
        qDebug() << "send message" << cell->name;
        // 打开对话框
        SltFriendsClicked(cell);
    }
    else if (!action->text().compare(tr("移动至黑名单")))
    {
        qDebug() << "balck friend list" << cell->name;
    }
    else if (!action->text().compare(tr("删除联系人")))
    {
        qDebug() << "delete my friend" << cell->name;
        ui->frindListWidget->removeQQCell(cell);
        // 更新数据库
//        bool bOk = DataBaseMagr::Instance()->DeleteMyFriend(cell->id, MyApp::m_nId);
//        CMessageBox::Infomation(this, bOk ? tr("用户删除成功！") : tr("用户删除失败！"));
    }
}

//好友点击
void MainWindow::SltFriendsClicked(QQCell *cell)
{
    ChatWindow* chatwindow = new ChatWindow();
    connect(chatwindow, &ChatWindow::signalSendMessage, m_tcpSocket, &ClientSocket::onSendMessage);
    connect(chatwindow, &ChatWindow::signalClose, m_tcpSocket, &ClientSocket::onFriendChatWindowClose);
    //设置窗口属性
    //这里传入的cell表示好友
    chatwindow->SetCell(cell);
    chatwindow->show();

}

//群组点击
void MainWindow::SltGroupsClicked(QQCell *cell)
{

}

//关闭与好友的窗口
void MainWindow::SltFriendChatWindowClose(){

}

