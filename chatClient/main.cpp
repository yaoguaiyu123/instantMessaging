// Date:2024/2/22
// Author:妖怪鱼
// Introduction:即时通讯程序客户端
#include "mainwindow.h"
#include "loginwidget.h"
#include <QApplication>
#include "global.h"
#include "databasemagr.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    qDebug() << myHelper::GetIP();
    DataBaseMagr::Instance()->OpenUserDb("user.db");
    DataBaseMagr::Instance()->OpenMessageDb("msg.db");
    LoginWidget l;
    myHelper::FormInCenter(&l);  //设置窗体居中
    l.show();
    return a.exec();
}
