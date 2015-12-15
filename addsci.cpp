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
}

bool AddSci::addscientist()
{
    ui->label_errorName->setText("");
    ui->label_errorYear->setText("");
    QString name = ui->line_name->text();
    QString yob = ui->line_yob->text();
    QString yod;
    QString gender = ui->comboBox_gender->currentText();

    string nameStr = name.toStdString();
    string yobStr = yob.toStdString();

    for (size_t i = 0; i < nameStr.length(); i++)
    {
        if (isdigit(nameStr[i]))
        {
            ui->label_errorName->setText("<span style = 'color: #DC143C' > Name cannot contain numbers </span>");
            ui->line_name->setText("");
            return false;
        }
    }

    for (size_t i = 0; i < yobStr.length(); i++)
    {
        if (isalpha(yobStr[i]))
        {
            ui->label_errorYear->setText("<span style = 'color: #DC143C' > Year cannot contain characters </span>");
            ui->line_yob->setText("");
            return false;
        }
    }


    if (name.isEmpty())
    {
        ui->label_errorName->setText("<span style = 'color: #DC143C' > Name cannot be empty </span>");
        return false;
    }
    if (yob.isEmpty())
    {
        ui->label_errorYear->setText("<span style = 'color: #DC143C' > Year of birth cannot be empty </span>");
        return false;
    }
    if(ui->button_alive->isChecked())
        yod = "0";
    else if(ui->button_dead->isChecked())
        yod = ui->line_yod->text();

    return serv.addScientist(name, yob, yod, gender);
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
    close();
}
