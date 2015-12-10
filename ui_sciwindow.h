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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SciWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *filter_scientists;
    QVBoxLayout *verticalLayout;
    QListWidget *list_scientists;
    QPushButton *pushButton;
    QPushButton *button_addsci;

    void setupUi(QDialog *SciWindow)
    {
        if (SciWindow->objectName().isEmpty())
            SciWindow->setObjectName(QStringLiteral("SciWindow"));
        SciWindow->resize(346, 446);
        horizontalLayout = new QHBoxLayout(SciWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        filter_scientists = new QLineEdit(SciWindow);
        filter_scientists->setObjectName(QStringLiteral("filter_scientists"));

        verticalLayout_2->addWidget(filter_scientists);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        list_scientists = new QListWidget(SciWindow);
        list_scientists->setObjectName(QStringLiteral("list_scientists"));

        verticalLayout->addWidget(list_scientists);

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
        pushButton->setText(QApplication::translate("SciWindow", "Remove selected scientist", 0));
        button_addsci->setText(QApplication::translate("SciWindow", "Add New", 0));
    } // retranslateUi

};

namespace Ui {
    class SciWindow: public Ui_SciWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIWINDOW_H
