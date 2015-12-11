#include "compwindow.h"
#include "ui_compwindow.h"
#include "addcomp.h"

CompWindow::CompWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompWindow)
{
    ui->setupUi(this);
}

CompWindow::~CompWindow()
{
    delete ui;
}

void CompWindow::on_button_add_new_clicked()
{
    AddComp addcomputer;
    addcomputer.exec();
}

void CompWindow::on_button_close_clicked()
{
    close();
}
