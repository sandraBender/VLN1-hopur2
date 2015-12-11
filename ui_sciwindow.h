/********************************************************************************
** Form generated from reading UI file 'sciwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIWINDOW_H
#define UI_SCIWINDOW_H

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

class Ui_SciWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *filter_scientists;
    QVBoxLayout *verticalLayout;
    QTableWidget *table_scientist;
    QPushButton *pushButton;
    QPushButton *button_addsci;

    void setupUi(QDialog *SciWindow)
    {
        if (SciWindow->objectName().isEmpty())
            SciWindow->setObjectName(QStringLiteral("SciWindow"));
        SciWindow->resize(458, 474);
        horizontalLayout = new QHBoxLayout(SciWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        filter_scientists = new QLineEdit(SciWindow);
        filter_scientists->setObjectName(QStringLiteral("filter_scientists"));

        verticalLayout_2->addWidget(filter_scientists);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        table_scientist = new QTableWidget(SciWindow);
        if (table_scientist->columnCount() < 4)
            table_scientist->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_scientist->setObjectName(QStringLiteral("table_scientist"));

        verticalLayout->addWidget(table_scientist);

        pushButton = new QPushButton(SciWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        button_addsci = new QPushButton(SciWindow);
        button_addsci->setObjectName(QStringLiteral("button_addsci"));

        verticalLayout->addWidget(button_addsci);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SciWindow);

        QMetaObject::connectSlotsByName(SciWindow);
    } // setupUi

    void retranslateUi(QDialog *SciWindow)
    {
        SciWindow->setWindowTitle(QApplication::translate("SciWindow", "Dialog", 0));
        filter_scientists->setPlaceholderText(QApplication::translate("SciWindow", "Filter scientists..", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SciWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SciWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SciWindow", "Year of death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientist->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SciWindow", "Gender", 0));
        pushButton->setText(QApplication::translate("SciWindow", "Remove selected scientist", 0));
        button_addsci->setText(QApplication::translate("SciWindow", "Add New", 0));
    } // retranslateUi

};

namespace Ui {
    class SciWindow: public Ui_SciWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIWINDOW_H
