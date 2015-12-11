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

void AddSci::addscientist()
{
    QString name = ui->line_name->text();
    QString yob = ui->line_yob->text();
    QString yod;
    QString gender = ui->comboBox_gender->currentText();
    if(ui->button_alive)
        yod = "0";
    else if(ui->button_dead)
        yod = ui->line_yod->text();


    serv.addScientist(name, yob, yod, gender);

}

AddSci::~AddSci()
{
    delete ui;
}

void AddSci::on_button_add_clicked()
{
    addscientist();
    SciWindow yee;
    close();
    yee.displayAllScientists("");
}

void AddSci::on_button_cancel_clicked()
{
    close();
}
