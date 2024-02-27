#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//主界面类
#include <QMainWindow>
#include "customwidget.h"
#include <QButtonGroup>


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
    void SltMainPageChanged(int index);
private:
    Ui::MainWindow *ui;
    QButtonGroup* m_buttonGroup;
};
#endif // MAINWINDOW_H
