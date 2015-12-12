#include "linkwindow.h"
#include "ui_linkwindow.h"

LinkWindow::LinkWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinkWindow)
{
    ui->setupUi(this);
}

LinkWindow::~LinkWindow()
{
    delete ui;
}

void LinkWindow::on_Button_link_clicked()
{

}

