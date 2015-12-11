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
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CompWindow
{
public:

    void setupUi(QDialog *CompWindow)
    {
        if (CompWindow->objectName().isEmpty())
            CompWindow->setObjectName(QStringLiteral("CompWindow"));
        CompWindow->resize(400, 300);

        retranslateUi(CompWindow);

        QMetaObject::connectSlotsByName(CompWindow);
    } // setupUi

    void retranslateUi(QDialog *CompWindow)
    {
        CompWindow->setWindowTitle(QApplication::translate("CompWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CompWindow: public Ui_CompWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPWINDOW_H
