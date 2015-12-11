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

QT_BEGIN_NAMESPACE

class Ui_LinkWindow
{
public:

    void setupUi(QDialog *LinkWindow)
    {
        if (LinkWindow->objectName().isEmpty())
            LinkWindow->setObjectName(QStringLiteral("LinkWindow"));
        LinkWindow->resize(400, 300);

        retranslateUi(LinkWindow);

        QMetaObject::connectSlotsByName(LinkWindow);
    } // setupUi

    void retranslateUi(QDialog *LinkWindow)
    {
        LinkWindow->setWindowTitle(QApplication::translate("LinkWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkWindow: public Ui_LinkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
