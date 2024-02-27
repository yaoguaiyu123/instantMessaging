#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "chatstackedwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : CustomMoveWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //去掉Qt自带的标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    m_buttonGroup = new QButtonGroup();
    m_buttonGroup->addButton(ui->btnFrind, 0); // 将ui中的按钮加入到buttonGroup中
    m_buttonGroup->addButton(ui->btnGroup, 1);
    m_buttonGroup->addButton(ui->btnConversation, 2);
    m_buttonGroup->addButton(ui->btnApplay, 3);

    connect(m_buttonGroup, &QButtonGroup::idClicked, this, &MainWindow::SltMainPageChanged);

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




