#include "compwindow.h"
#include "ui_compwindow.h"

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
