#include "addcomp.h"
#include "ui_addcomp.h"
#include <QMessageBox>
#include "compwindow.h"

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
    ui->line_name->clear();
    ui->line_build_year->clear();
    close();
}

bool AddComp::addcomputer()
{
    ui->label_errorName->setText("");
    ui->label_errorYear->setText("");
    QString name = ui->line_name->text();
    QString buildyear;
    QString builtornot;
    bool error = false;

    if(ui->button_built->isChecked()){
        buildyear = ui->line_build_year->text();
        builtornot = "1";
    }
    else if(ui->button_notbuilt->isChecked()){
        buildyear = "0";
        builtornot = "0";
    }

    string buildStr = buildyear.toStdString();

    for (size_t i = 0; i < buildStr.length(); i++)
    {
        if (isalpha(buildStr[i]))
        {
            ui->label_errorYear->setText("<span style = 'color: #DC143C' > Year cannot contain characters </span>");
            ui->line_build_year->setText("");
            error = true;
        }
    }

    if(name.isEmpty())
    {
        ui->label_errorName->setText("<span style = 'color: #DC143C' > Name cannot be empty </span>");
        error = true;
    }

    if(buildyear.isEmpty())
    {
        ui->label_errorYear->setText("<span style = 'color: #DC143C' > Build year cannot be empty </span>");
        error = true;
    }
    if(error)
    {
        return false;
    }

    QString type = ui->combo_type->currentText();
    return serv.addComputer(name, buildyear, builtornot, type);
}

void AddComp::on_button_add_clicked()
{
    if (addcomputer())
    {
        close();
        CompWindow comWin;
        comWin.displayAllComputers("", '1');
        ui->line_name->clear();
        ui->line_build_year->clear();
    }
}

