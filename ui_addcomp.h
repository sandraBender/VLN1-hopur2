/********************************************************************************
** Form generated from reading UI file 'addcomp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMP_H
#define UI_ADDCOMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddComp
{
public:
    QPushButton *button_add;
    QPushButton *button_close;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *button_built;
    QRadioButton *button_notbuilt;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lebel_buildyear;
    QLineEdit *line_build_year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_type;
    QComboBox *combo_type;

    void setupUi(QDialog *AddComp)
    {
        if (AddComp->objectName().isEmpty())
            AddComp->setObjectName(QStringLiteral("AddComp"));
        AddComp->resize(400, 300);
        button_add = new QPushButton(AddComp);
        button_add->setObjectName(QStringLiteral("button_add"));
        button_add->setGeometry(QRect(20, 200, 113, 32));
        button_close = new QPushButton(AddComp);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setGeometry(QRect(150, 200, 113, 32));
        layoutWidget = new QWidget(AddComp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 198, 145));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout->addWidget(label_name);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName(QStringLiteral("line_name"));

        horizontalLayout->addWidget(line_name);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        button_built = new QRadioButton(layoutWidget);
        button_built->setObjectName(QStringLiteral("button_built"));

        verticalLayout->addWidget(button_built);

        button_notbuilt = new QRadioButton(layoutWidget);
        button_notbuilt->setObjectName(QStringLiteral("button_notbuilt"));

        verticalLayout->addWidget(button_notbuilt);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lebel_buildyear = new QLabel(layoutWidget);
        lebel_buildyear->setObjectName(QStringLiteral("lebel_buildyear"));

        horizontalLayout_3->addWidget(lebel_buildyear);

        line_build_year = new QLineEdit(layoutWidget);
        line_build_year->setObjectName(QStringLiteral("line_build_year"));
        line_build_year->setEnabled(false);

        horizontalLayout_3->addWidget(line_build_year);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_type = new QLabel(layoutWidget);
        label_type->setObjectName(QStringLiteral("label_type"));

        horizontalLayout_4->addWidget(label_type);

        combo_type = new QComboBox(layoutWidget);
        combo_type->setObjectName(QStringLiteral("combo_type"));

        horizontalLayout_4->addWidget(combo_type);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(AddComp);
        QObject::connect(button_built, SIGNAL(toggled(bool)), line_build_year, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddComp);
    } // setupUi

    void retranslateUi(QDialog *AddComp)
    {
        AddComp->setWindowTitle(QApplication::translate("AddComp", "Dialog", 0));
        button_add->setText(QApplication::translate("AddComp", "Add", 0));
        button_close->setText(QApplication::translate("AddComp", "Close", 0));
        label_name->setText(QApplication::translate("AddComp", "Name", 0));
        button_built->setText(QApplication::translate("AddComp", "Built", 0));
        button_notbuilt->setText(QApplication::translate("AddComp", "Not built", 0));
        lebel_buildyear->setText(QApplication::translate("AddComp", "Build Year", 0));
        label_type->setText(QApplication::translate("AddComp", "Type", 0));
        combo_type->clear();
        combo_type->insertItems(0, QStringList()
         << QApplication::translate("AddComp", "Electronic", 0)
         << QApplication::translate("AddComp", "Mechanical", 0)
         << QApplication::translate("AddComp", "Transistor", 0)
         << QApplication::translate("AddComp", "Other", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AddComp: public Ui_AddComp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMP_H