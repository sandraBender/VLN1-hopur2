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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkWindow
{
public:
    QPushButton *button_close;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *list_scientists;
    QListWidget *list_computers;
    QPushButton *Button_link;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_known_relations;
    QTableWidget *table_known_relations;
    QPushButton *button_remove_link;

    void setupUi(QDialog *LinkWindow)
    {
        if (LinkWindow->objectName().isEmpty())
            LinkWindow->setObjectName(QStringLiteral("LinkWindow"));
        LinkWindow->resize(561, 491);
        button_close = new QPushButton(LinkWindow);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setGeometry(QRect(483, 460, 77, 32));
        layoutWidget = new QWidget(LinkWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(7, 12, 211, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        list_scientists = new QListWidget(layoutWidget);
        list_scientists->setObjectName(QStringLiteral("list_scientists"));
        list_scientists->setResizeMode(QListView::Adjust);

        verticalLayout->addWidget(list_scientists);

        list_computers = new QListWidget(layoutWidget);
        list_computers->setObjectName(QStringLiteral("list_computers"));

        verticalLayout->addWidget(list_computers);

        Button_link = new QPushButton(layoutWidget);
        Button_link->setObjectName(QStringLiteral("Button_link"));
        Button_link->setEnabled(false);

        verticalLayout->addWidget(Button_link);

        layoutWidget1 = new QWidget(LinkWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(232, 12, 321, 441));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_known_relations = new QLabel(layoutWidget1);
        label_known_relations->setObjectName(QStringLiteral("label_known_relations"));

        verticalLayout_2->addWidget(label_known_relations);

        table_known_relations = new QTableWidget(layoutWidget1);
        if (table_known_relations->columnCount() < 3)
            table_known_relations->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_known_relations->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_known_relations->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_known_relations->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table_known_relations->setObjectName(QStringLiteral("table_known_relations"));
        table_known_relations->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_known_relations->setShowGrid(false);
        table_known_relations->horizontalHeader()->setVisible(false);
        table_known_relations->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(table_known_relations);

        button_remove_link = new QPushButton(layoutWidget1);
        button_remove_link->setObjectName(QStringLiteral("button_remove_link"));
        button_remove_link->setEnabled(false);

        verticalLayout_2->addWidget(button_remove_link);


        retranslateUi(LinkWindow);

        QMetaObject::connectSlotsByName(LinkWindow);
    } // setupUi

    void retranslateUi(QDialog *LinkWindow)
    {
        LinkWindow->setWindowTitle(QApplication::translate("LinkWindow", "Scientists and Computers", 0));
        button_close->setText(QApplication::translate("LinkWindow", "Close", 0));
        Button_link->setText(QApplication::translate("LinkWindow", "Link", 0));
        label_known_relations->setText(QApplication::translate("LinkWindow", "Known relations:", 0));
        QTableWidgetItem *___qtablewidgetitem = table_known_relations->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("LinkWindow", "sciname", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_known_relations->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("LinkWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_known_relations->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("LinkWindow", "compname", 0));
        button_remove_link->setText(QApplication::translate("LinkWindow", "Remove link", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkWindow: public Ui_LinkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
