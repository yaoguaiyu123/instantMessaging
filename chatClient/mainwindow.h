#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//主界面类
#include <QMainWindow>
#include "customwidget.h"


QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
QT_END_NAMESPACE

    class MainWindow : public CustomMoveWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnWinClose_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
