#include "addsci.h"
#include "ui_addsci.h"
#include "service.h"
#include "sciwindow.h"

AddSci::AddSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSci)
{
    ui->setupUi(this);
    ui->button_alive->setAutoExclusive(true);
    ui->label_errorName->clear();
    ui->label_erroryob->clear();
    ui->label_erroryod->clear();
}

bool AddSci::addscientist()
{
    ui->label_errorName->setText("");
    ui->label_erroryob->setText("");
    ui->label_erroryod->setText("");
    QString name = ui->line_name->text();
    QString yob = ui->line_yob->text();
    QString yod = ui->label_yod->text();
    QString gender = ui->comboBox_gender->currentText();
    bool error;

    string nameStr = name.toStdString();
    string yobStr = yob.toStdString();
    string yodStr = yod.toStdString();

    for (size_t i = 0; i < nameStr.length(); i++)
    {
        if (isdigit(nameStr[i]))
        {
            ui->label_errorName->setText("<span style = 'color: #DC143C' > Name cannot contain numbers </span>");
            ui->line_name->setText("");
            error = true;
        }
    }



    for (size_t i = 0; i < yobStr.length(); i++)
    {
        if (isalpha(yobStr[i]))
        {
            ui->label_erroryob->setText("<span style = 'color: #DC143C' > Year cannot contain characters </span>");
            ui->line_yob->setText("");
            error = true;
        }
    }


    if (name.isEmpty())
    {
        ui->label_errorName->setText("<span style = 'color: #DC143C' > Name cannot be empty </span>");
        error = true;
    }
    if (yob.isEmpty())
    {
        ui->label_erroryob->setText("<span style = 'color: #DC143C' > Year of birth cannot be empty </span>");
        error = true;
    }

    if(ui->button_dead->isChecked() && yod.isEmpty())
        {
            ui->label_erroryod->setText("<span style = 'color: #DC143C' > Year of death cannot be empty </span>");
            error = true;
        }
    if(ui->button_alive->isChecked())
        yod = "0";

    if (error)
    {
        yod = "";
        return false;
    }

    serv.addScientist(name, yob, yod, gender);

    return true;
}

AddSci::~AddSci()
{
    delete ui;
}

void AddSci::on_button_add_clicked()
{
    if (addscientist())
    {
        close();
        SciWindow SciWin;
        SciWin.displayAllScientists("",'1');
        ui->line_name->clear();
        ui->line_yob->clear();
    }
}

void AddSci::on_button_cancel_clicked()
{
    ui->label_errorName->clear();
    ui->label_erroryob->clear();
    ui->label_erroryod->clear();
    close();
}
