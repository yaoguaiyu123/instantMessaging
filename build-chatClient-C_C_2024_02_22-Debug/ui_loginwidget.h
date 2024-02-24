/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <animationstackwidget.h>
#include <iplineedit.h>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    AnimationStackWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMenu;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QWidget *widgetBody;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelWeclcom;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelUserHead;
    QWidget *widgetInput;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPasswd;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxPasswd;
    QCheckBox *checkBoxAutoLogin;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLogin;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QWidget *widgetWinTitle_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWinTitle_2;
    QPushButton *btnWinMin_2;
    QPushButton *btnWinClose_2;
    QWidget *widgetBody_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QLabel *label_3;
    IPLineEdit *lineEditHostAddr;
    QLabel *label_4;
    QLineEdit *lineEditHostMsgPort;
    QLabel *label_5;
    QLineEdit *lineEditHostFilePort;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnSaveCfg;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(391, 319);
        LoginWidget->setStyleSheet(QString::fromUtf8("QWidget#LoginWidget{\n"
"	border-radius:10px;\n"
"}"));
        stackedWidget = new AnimationStackWidget(LoginWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 370, 294));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        widgetWinTitle = new QWidget(page);
        widgetWinTitle->setObjectName("widgetWinTitle");
        widgetWinTitle->setMinimumSize(QSize(0, 30));
        widgetWinTitle->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_2 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labelWinIcon = new QLabel(widgetWinTitle);
        labelWinIcon->setObjectName("labelWinIcon");
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(30, 30));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));

        horizontalLayout_2->addWidget(labelWinIcon);

        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName("labelWinTitle");
        labelWinTitle->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));

        horizontalLayout_2->addWidget(labelWinTitle);

        btnWinMenu = new QPushButton(widgetWinTitle);
        btnWinMenu->setObjectName("btnWinMenu");
        btnWinMenu->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/common/ic_login_cfg.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMenu->setIcon(icon);

        horizontalLayout_2->addWidget(btnWinMenu);

        btnWinMin = new QPushButton(widgetWinTitle);
        btnWinMin->setObjectName("btnWinMin");
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/common/ic_min_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon1);

        horizontalLayout_2->addWidget(btnWinMin);

        btnWinClose = new QPushButton(widgetWinTitle);
        btnWinClose->setObjectName("btnWinClose");
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon2);

        horizontalLayout_2->addWidget(btnWinClose);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addWidget(widgetWinTitle);

        widgetBody = new QWidget(page);
        widgetBody->setObjectName("widgetBody");
        verticalLayout_5 = new QVBoxLayout(widgetBody);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelWeclcom = new QLabel(widgetBody);
        labelWeclcom->setObjectName("labelWeclcom");
        labelWeclcom->setPixmap(QPixmap(QString::fromUtf8(":/resource/background/logo.png")));
        labelWeclcom->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelWeclcom);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(40, 20, 40, 20);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelUserHead = new QLabel(widgetBody);
        labelUserHead->setObjectName("labelUserHead");
        labelUserHead->setMinimumSize(QSize(82, 82));
        labelUserHead->setMaximumSize(QSize(82, 82));
        labelUserHead->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;"));
        labelUserHead->setPixmap(QPixmap(QString::fromUtf8(":/resource/head/head-64.png")));
        labelUserHead->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelUserHead);

        widgetInput = new QWidget(widgetBody);
        widgetInput->setObjectName("widgetInput");
        verticalLayout_3 = new QVBoxLayout(widgetInput);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditUser = new QLineEdit(widgetInput);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setMinimumSize(QSize(0, 25));
        lineEditUser->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(lineEditUser);

        lineEditPasswd = new QLineEdit(widgetInput);
        lineEditPasswd->setObjectName("lineEditPasswd");
        lineEditPasswd->setMinimumSize(QSize(0, 25));
        lineEditPasswd->setMaximumSize(QSize(16777215, 25));
        lineEditPasswd->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEditPasswd);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxPasswd = new QCheckBox(widgetInput);
        checkBoxPasswd->setObjectName("checkBoxPasswd");
        checkBoxPasswd->setChecked(true);

        horizontalLayout->addWidget(checkBoxPasswd);

        checkBoxAutoLogin = new QCheckBox(widgetInput);
        checkBoxAutoLogin->setObjectName("checkBoxAutoLogin");
        checkBoxAutoLogin->setChecked(false);

        horizontalLayout->addWidget(checkBoxAutoLogin);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_4->addWidget(widgetInput);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnLogin = new QPushButton(widgetBody);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnLogin);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(widgetBody);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(1, 1, 1, 1);
        widgetWinTitle_2 = new QWidget(page_2);
        widgetWinTitle_2->setObjectName("widgetWinTitle_2");
        widgetWinTitle_2->setMinimumSize(QSize(0, 30));
        widgetWinTitle_2->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_5 = new QHBoxLayout(widgetWinTitle_2);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 0, 0, 0);
        labelWinTitle_2 = new QLabel(widgetWinTitle_2);
        labelWinTitle_2->setObjectName("labelWinTitle_2");

        horizontalLayout_5->addWidget(labelWinTitle_2);

        btnWinMin_2 = new QPushButton(widgetWinTitle_2);
        btnWinMin_2->setObjectName("btnWinMin_2");
        btnWinMin_2->setFocusPolicy(Qt::NoFocus);
        btnWinMin_2->setStyleSheet(QString::fromUtf8(""));
        btnWinMin_2->setIcon(icon1);

        horizontalLayout_5->addWidget(btnWinMin_2);

        btnWinClose_2 = new QPushButton(widgetWinTitle_2);
        btnWinClose_2->setObjectName("btnWinClose_2");
        btnWinClose_2->setFocusPolicy(Qt::NoFocus);
        btnWinClose_2->setStyleSheet(QString::fromUtf8(""));
        btnWinClose_2->setIcon(icon2);

        horizontalLayout_5->addWidget(btnWinClose_2);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_9->addWidget(widgetWinTitle_2);

        widgetBody_2 = new QWidget(page_2);
        widgetBody_2->setObjectName("widgetBody_2");
        verticalLayout_6 = new QVBoxLayout(widgetBody_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox = new QGroupBox(widgetBody_2);
        groupBox->setObjectName("groupBox");
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 0, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditHostAddr = new IPLineEdit(groupBox);
        lineEditHostAddr->setObjectName("lineEditHostAddr");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditHostAddr);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditHostMsgPort = new QLineEdit(groupBox);
        lineEditHostMsgPort->setObjectName("lineEditHostMsgPort");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditHostMsgPort);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEditHostFilePort = new QLineEdit(groupBox);
        lineEditHostFilePort->setObjectName("lineEditHostFilePort");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditHostFilePort);


        horizontalLayout_6->addLayout(formLayout);


        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        verticalLayout_6->addWidget(groupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnCancel = new QPushButton(widgetBody_2);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_7->addWidget(btnCancel);

        btnSaveCfg = new QPushButton(widgetBody_2);
        btnSaveCfg->setObjectName("btnSaveCfg");

        horizontalLayout_7->addWidget(btnSaveCfg);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_9->addWidget(widgetBody_2);

        stackedWidget->addWidget(page_2);

        retranslateUi(LoginWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Form", nullptr));
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QString());
        btnWinMenu->setText(QString());
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
        labelWeclcom->setText(QString());
        labelUserHead->setText(QString());
        lineEditUser->setText(QString());
        lineEditUser->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEditPasswd->setText(QString());
        lineEditPasswd->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\347\224\250\346\210\267\345\257\206\347\240\201", nullptr));
        checkBoxPasswd->setText(QCoreApplication::translate("LoginWidget", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBoxAutoLogin->setText(QCoreApplication::translate("LoginWidget", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        btnLogin->setToolTip(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLogin->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        labelWinTitle_2->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225\351\205\215\347\275\256", nullptr));
        btnWinMin_2->setText(QString());
        btnWinClose_2->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("LoginWidget", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWidget", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\351\205\215\347\275\256\357\274\232", nullptr));
        lineEditHostAddr->setText(QString());
        label_4->setText(QCoreApplication::translate("LoginWidget", "\346\266\210\346\201\257\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        lineEditHostMsgPort->setText(QCoreApplication::translate("LoginWidget", "60100", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWidget", "\346\226\207\344\273\266\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        lineEditHostFilePort->setText(QCoreApplication::translate("LoginWidget", "60101", nullptr));
        btnCancel->setText(QCoreApplication::translate("LoginWidget", "\345\217\226\346\266\210", nullptr));
        btnSaveCfg->setText(QCoreApplication::translate("LoginWidget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
