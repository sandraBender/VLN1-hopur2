/********************************************************************************
** Form generated from reading UI file 'addsci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCI_H
#define UI_ADDSCI_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSci
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_name;
    QLabel *label_errorName;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_yob;
    QLabel *label_errorYear;
    QLineEdit *line_yob;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *button_alive;
    QRadioButton *button_dead;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_yod;
    QLineEdit *line_yod;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_gender;
    QComboBox *comboBox_gender;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *button_add;
    QPushButton *button_cancel;

    void setupUi(QDialog *AddSci)
    {
        if (AddSci->objectName().isEmpty())
            AddSci->setObjectName(QStringLiteral("AddSci"));
        AddSci->resize(321, 307);
        verticalLayout_2 = new QVBoxLayout(AddSci);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_name = new QLabel(AddSci);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_11->addWidget(label_name);

        label_errorName = new QLabel(AddSci);
        label_errorName->setObjectName(QStringLiteral("label_errorName"));

        horizontalLayout_11->addWidget(label_errorName);


        verticalLayout_4->addLayout(horizontalLayout_11);

        line_name = new QLineEdit(AddSci);
        line_name->setObjectName(QStringLiteral("line_name"));

        verticalLayout_4->addWidget(line_name);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_yob = new QLabel(AddSci);
        label_yob->setObjectName(QStringLiteral("label_yob"));

        horizontalLayout_12->addWidget(label_yob);

        label_errorYear = new QLabel(AddSci);
        label_errorYear->setObjectName(QStringLiteral("label_errorYear"));

        horizontalLayout_12->addWidget(label_errorYear);


        verticalLayout_4->addLayout(horizontalLayout_12);

        line_yob = new QLineEdit(AddSci);
        line_yob->setObjectName(QStringLiteral("line_yob"));

        verticalLayout_4->addWidget(line_yob);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        button_alive = new QRadioButton(AddSci);
        button_alive->setObjectName(QStringLiteral("button_alive"));
        button_alive->setChecked(true);

        verticalLayout->addWidget(button_alive, 0, Qt::AlignRight);

        button_dead = new QRadioButton(AddSci);
        button_dead->setObjectName(QStringLiteral("button_dead"));

        verticalLayout->addWidget(button_dead, 0, Qt::AlignRight);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_yod = new QLabel(AddSci);
        label_yod->setObjectName(QStringLiteral("label_yod"));

        horizontalLayout_13->addWidget(label_yod);

        line_yod = new QLineEdit(AddSci);
        line_yod->setObjectName(QStringLiteral("line_yod"));
        line_yod->setEnabled(false);

        horizontalLayout_13->addWidget(line_yod, 0, Qt::AlignRight);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_gender = new QLabel(AddSci);
        label_gender->setObjectName(QStringLiteral("label_gender"));

        horizontalLayout_14->addWidget(label_gender);

        comboBox_gender = new QComboBox(AddSci);
        comboBox_gender->setObjectName(QStringLiteral("comboBox_gender"));

        horizontalLayout_14->addWidget(comboBox_gender);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);

        button_add = new QPushButton(AddSci);
        button_add->setObjectName(QStringLiteral("button_add"));

        horizontalLayout_15->addWidget(button_add);

        button_cancel = new QPushButton(AddSci);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        horizontalLayout_15->addWidget(button_cancel);


        verticalLayout_4->addLayout(horizontalLayout_15);


        verticalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(AddSci);
        QObject::connect(button_dead, SIGNAL(toggled(bool)), line_yod, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddSci);
    } // setupUi

    void retranslateUi(QDialog *AddSci)
    {
        AddSci->setWindowTitle(QApplication::translate("AddSci", "Dialog", 0));
        label_name->setText(QApplication::translate("AddSci", "Name", 0));
        label_errorName->setText(QString());
        label_yob->setText(QApplication::translate("AddSci", "Year of birth", 0));
        label_errorYear->setText(QString());
        button_alive->setText(QApplication::translate("AddSci", "Alive", 0));
        button_dead->setText(QApplication::translate("AddSci", "Dead", 0));
        label_yod->setText(QApplication::translate("AddSci", "Year of death", 0));
        label_gender->setText(QApplication::translate("AddSci", "Gender", 0));
        comboBox_gender->clear();
        comboBox_gender->insertItems(0, QStringList()
         << QApplication::translate("AddSci", "Male", 0)
         << QApplication::translate("AddSci", "Female", 0)
        );
        button_add->setText(QApplication::translate("AddSci", "Add", 0));
        button_cancel->setText(QApplication::translate("AddSci", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddSci: public Ui_AddSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCI_H
