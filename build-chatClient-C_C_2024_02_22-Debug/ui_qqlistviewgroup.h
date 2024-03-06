/********************************************************************************
** Form generated from reading UI file 'qqlistviewgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLISTVIEWGROUP_H
#define UI_QQLISTVIEWGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQListViewGroup
{
public:
    QLabel *groupIconLabel;
    QLabel *groupTitleLabel;
    QLabel *groupSubTitleLabel;

    void setupUi(QWidget *QQListViewGroup)
    {
        if (QQListViewGroup->objectName().isEmpty())
            QQListViewGroup->setObjectName("QQListViewGroup");
        QQListViewGroup->resize(270, 25);
        groupIconLabel = new QLabel(QQListViewGroup);
        groupIconLabel->setObjectName("groupIconLabel");
        groupIconLabel->setGeometry(QRect(10, 7, 11, 11));
        groupTitleLabel = new QLabel(QQListViewGroup);
        groupTitleLabel->setObjectName("groupTitleLabel");
        groupTitleLabel->setGeometry(QRect(30, 5, 131, 16));
        groupSubTitleLabel = new QLabel(QQListViewGroup);
        groupSubTitleLabel->setObjectName("groupSubTitleLabel");
        groupSubTitleLabel->setGeometry(QRect(200, 5, 62, 16));

        retranslateUi(QQListViewGroup);

        QMetaObject::connectSlotsByName(QQListViewGroup);
    } // setupUi

    void retranslateUi(QWidget *QQListViewGroup)
    {
        QQListViewGroup->setWindowTitle(QCoreApplication::translate("QQListViewGroup", "Form", nullptr));
        groupIconLabel->setText(QString());
        groupTitleLabel->setText(QString());
        groupSubTitleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQListViewGroup: public Ui_QQListViewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLISTVIEWGROUP_H
