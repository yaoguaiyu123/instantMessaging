// Date:2024/2/22
// Author:妖怪鱼
// Introduction:即时通讯程序客户端
#include "mainwindow.h"
#include "loginwidget.h"
#include <QApplication>
#include "global.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    qDebug() << myHelper::GetIP();
    LoginWidget l;
    myHelper::FormInCenter(&l);  //设置窗体居中
    l.show();
    return a.exec();
}
