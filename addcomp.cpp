#include "addcomp.h"
#include "ui_addcomp.h"

AddComp::AddComp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddComp)
{
    ui->setupUi(this);
}

AddComp::~AddComp()
{
    delete ui;
}

void AddComp::on_button_close_clicked()
{
    close();
}
