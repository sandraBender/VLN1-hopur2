/********************************************************************************
** Form generated from reading UI file 'linkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKWINDOW_H
#define UI_LINKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LinkWindow
{
public:
    QListWidget *list_scientists;
    QListWidget *list_computers;
    QPushButton *Button_link;

    void setupUi(QDialog *LinkWindow)
    {
        if (LinkWindow->objectName().isEmpty())
            LinkWindow->setObjectName(QStringLiteral("LinkWindow"));
        LinkWindow->resize(465, 447);
        list_scientists = new QListWidget(LinkWindow);
        new QListWidgetItem(list_scientists);
        list_scientists->setObjectName(QStringLiteral("list_scientists"));
        list_scientists->setGeometry(QRect(10, 10, 441, 192));
        list_computers = new QListWidget(LinkWindow);
        new QListWidgetItem(list_computers);
        list_computers->setObjectName(QStringLiteral("list_computers"));
        list_computers->setGeometry(QRect(10, 210, 441, 192));
        Button_link = new QPushButton(LinkWindow);
        Button_link->setObjectName(QStringLiteral("Button_link"));
        Button_link->setEnabled(false);
        Button_link->setGeometry(QRect(14, 410, 431, 32));

        retranslateUi(LinkWindow);

        QMetaObject::connectSlotsByName(LinkWindow);
    } // setupUi

    void retranslateUi(QDialog *LinkWindow)
    {
        LinkWindow->setWindowTitle(QApplication::translate("LinkWindow", "Dialog", 0));

        const bool __sortingEnabled = list_scientists->isSortingEnabled();
        list_scientists->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = list_scientists->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("LinkWindow", "Name of scientists", 0));
        list_scientists->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = list_computers->isSortingEnabled();
        list_computers->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = list_computers->item(0);
        ___qlistwidgetitem1->setText(QApplication::translate("LinkWindow", "Name of computers", 0));
        list_computers->setSortingEnabled(__sortingEnabled1);

        Button_link->setText(QApplication::translate("LinkWindow", "Link", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkWindow: public Ui_LinkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
