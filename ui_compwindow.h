/********************************************************************************
** Form generated from reading UI file 'compwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPWINDOW_H
#define UI_COMPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CompWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_filter_computers;
    QTableWidget *table_computers;
    QPushButton *button_remove_selected;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_add_new;
    QPushButton *button_close;

    void setupUi(QDialog *CompWindow)
    {
        if (CompWindow->objectName().isEmpty())
            CompWindow->setObjectName(QStringLiteral("CompWindow"));
        CompWindow->resize(367, 363);
        verticalLayout_2 = new QVBoxLayout(CompWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_filter_computers = new QLineEdit(CompWindow);
        line_filter_computers->setObjectName(QStringLiteral("line_filter_computers"));

        verticalLayout->addWidget(line_filter_computers);

        table_computers = new QTableWidget(CompWindow);
        if (table_computers->columnCount() < 3)
            table_computers->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_computers->setSortingEnabled(true);
        table_computers->horizontalHeader()->setCascadingSectionResizes(true);
        table_computers->horizontalHeader()->setDefaultSectionSize(80);
        table_computers->horizontalHeader()->setStretchLastSection(true);
        table_computers->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(table_computers);

        button_remove_selected = new QPushButton(CompWindow);
        button_remove_selected->setObjectName(QStringLiteral("button_remove_selected"));
        button_remove_selected->setEnabled(false);

        verticalLayout->addWidget(button_remove_selected);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_add_new = new QPushButton(CompWindow);
        button_add_new->setObjectName(QStringLiteral("button_add_new"));

        horizontalLayout->addWidget(button_add_new);

        button_close = new QPushButton(CompWindow);
        button_close->setObjectName(QStringLiteral("button_close"));

        horizontalLayout->addWidget(button_close);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CompWindow);

        QMetaObject::connectSlotsByName(CompWindow);
    } // setupUi

    void retranslateUi(QDialog *CompWindow)
    {
        CompWindow->setWindowTitle(QApplication::translate("CompWindow", "Dialog", 0));
        line_filter_computers->setPlaceholderText(QApplication::translate("CompWindow", "Filter computers...", 0));
        QTableWidgetItem *___qtablewidgetitem = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CompWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CompWindow", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CompWindow", "Type", 0));
        button_remove_selected->setText(QApplication::translate("CompWindow", "Remove selected computer", 0));
        button_add_new->setText(QApplication::translate("CompWindow", "Add new", 0));
        button_close->setText(QApplication::translate("CompWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class CompWindow: public Ui_CompWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPWINDOW_H
