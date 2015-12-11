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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompWindow
{
public:
    QWidget *layoutWidget;
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
        CompWindow->resize(400, 363);
        layoutWidget = new QWidget(CompWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 268, 305));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_filter_computers = new QLineEdit(layoutWidget);
        line_filter_computers->setObjectName(QStringLiteral("line_filter_computers"));

        verticalLayout->addWidget(line_filter_computers);

        table_computers = new QTableWidget(layoutWidget);
        table_computers->setObjectName(QStringLiteral("table_computers"));

        verticalLayout->addWidget(table_computers);

        button_remove_selected = new QPushButton(layoutWidget);
        button_remove_selected->setObjectName(QStringLiteral("button_remove_selected"));
        button_remove_selected->setEnabled(false);

        verticalLayout->addWidget(button_remove_selected);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_add_new = new QPushButton(layoutWidget);
        button_add_new->setObjectName(QStringLiteral("button_add_new"));

        horizontalLayout->addWidget(button_add_new);

        button_close = new QPushButton(layoutWidget);
        button_close->setObjectName(QStringLiteral("button_close"));

        horizontalLayout->addWidget(button_close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CompWindow);

        QMetaObject::connectSlotsByName(CompWindow);
    } // setupUi

    void retranslateUi(QDialog *CompWindow)
    {
        CompWindow->setWindowTitle(QApplication::translate("CompWindow", "Dialog", 0));
        line_filter_computers->setPlaceholderText(QApplication::translate("CompWindow", "Filter computers...", 0));
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
