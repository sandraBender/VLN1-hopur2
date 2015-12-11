#include "addsci.h"
#include "ui_addsci.h"
#include "service.h"

AddSci::AddSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSci)
{
    ui->setupUi(this);
}

void AddSci::addscientist()
{
    QString name = ui->line_name->text();
    QString yob = ui->line_yob->text();
    QString yod;
    QString gender = ui->comboBox_gender->currentText();
    if(ui->toggle_alive)
        yod = "0";
    else
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
    close();
}
