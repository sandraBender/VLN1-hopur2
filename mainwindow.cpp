#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_scientist_clicked()
{
    scientistWindow.exec();
}

void MainWindow::on_button_computer_clicked()
{
    CompWindow comp;
    comp.exec();
}

void MainWindow::on_button_relation_clicked()
{
    LinkWindow link;
    link.exec();
}

void MainWindow::on_button_quit_clicked()
{
    serv.disconnect();
}
