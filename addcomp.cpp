#include "addcomp.h"
#include "ui_addcomp.h"

AddComp::AddComp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddComp)
{
    ui->setupUi(this);
    ui->button_built->setAutoExclusive(true);
}

AddComp::~AddComp()
{
    delete ui;
}

void AddComp::on_button_close_clicked()
{
    close();
}

void AddComp::addcomputer()
{
    QString name = ui->line_name->text();
    QString buildyear;
    QString builtornot;
    if(ui->button_built->isChecked()){
        buildyear = ui->line_build_year->text();
        builtornot = "1";
    }
    else if(ui->button_notbuilt->isChecked()){
        buildyear = "0";
        builtornot = "0";
    }
    QString type = ui->combo_type->currentText();
    serv.addComputer(name, buildyear, builtornot, type);
}


void AddComp::on_button_add_clicked()
{
    addcomputer();
    close();
}
