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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *list_scientists;
    QListWidget *list_computers;
    QPushButton *Button_link;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_known_relations;
    QListWidget *list_known_relations;
    QPushButton *button_remove_link;
    QPushButton *button_close;

    void setupUi(QDialog *LinkWindow)
    {
        if (LinkWindow->objectName().isEmpty())
            LinkWindow->setObjectName(QStringLiteral("LinkWindow"));
        LinkWindow->resize(561, 491);
        widget = new QWidget(LinkWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 560, 482));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        list_scientists = new QListWidget(widget);
        list_scientists->setObjectName(QStringLiteral("list_scientists"));

        verticalLayout->addWidget(list_scientists);

        list_computers = new QListWidget(widget);
        list_computers->setObjectName(QStringLiteral("list_computers"));

        verticalLayout->addWidget(list_computers);

        Button_link = new QPushButton(widget);
        Button_link->setObjectName(QStringLiteral("Button_link"));
        Button_link->setEnabled(false);

        verticalLayout->addWidget(Button_link);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_known_relations = new QLabel(widget);
        label_known_relations->setObjectName(QStringLiteral("label_known_relations"));

        verticalLayout_2->addWidget(label_known_relations);

        list_known_relations = new QListWidget(widget);
        list_known_relations->setObjectName(QStringLiteral("list_known_relations"));

        verticalLayout_2->addWidget(list_known_relations);

        button_remove_link = new QPushButton(widget);
        button_remove_link->setObjectName(QStringLiteral("button_remove_link"));
        button_remove_link->setEnabled(false);

        verticalLayout_2->addWidget(button_remove_link);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        button_close = new QPushButton(widget);
        button_close->setObjectName(QStringLiteral("button_close"));

        verticalLayout_3->addWidget(button_close, 0, Qt::AlignRight);


        retranslateUi(LinkWindow);

        QMetaObject::connectSlotsByName(LinkWindow);
    } // setupUi

    void retranslateUi(QDialog *LinkWindow)
    {
        LinkWindow->setWindowTitle(QApplication::translate("LinkWindow", "Scientists and Computers", 0));
        Button_link->setText(QApplication::translate("LinkWindow", "Link", 0));
        label_known_relations->setText(QApplication::translate("LinkWindow", "Known relations:", 0));
        button_remove_link->setText(QApplication::translate("LinkWindow", "Remove link", 0));
        button_close->setText(QApplication::translate("LinkWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkWindow: public Ui_LinkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
