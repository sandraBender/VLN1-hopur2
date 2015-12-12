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
    QString name = ui->line_name->text();
    QString yob = ui->line_yob->text();
    QString yod;
    QString gender = ui->comboBox_gender->currentText();

    if (name.isEmpty())
    {
        ui->line_name->setText("Name cannot be empty");
        return false;
    }
    if (yob.isEmpty())
    {
        ui->line_yob->setText("Year of birth cannot be empty");
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
        SciWin.displayAllScientists("");
        ui->line_name->clear();
        ui->line_yob->clear();
    }
}

void AddSci::on_button_cancel_clicked()
{
    close();
}
