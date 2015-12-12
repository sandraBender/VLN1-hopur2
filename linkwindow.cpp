#include "linkwindow.h"
#include "ui_linkwindow.h"

LinkWindow::LinkWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinkWindow)
{
    ui->setupUi(this);

    displayAllScientists();
    displayAllComputers();
}

LinkWindow::~LinkWindow()
{
    delete ui;
}

void LinkWindow::on_Button_link_clicked()
{

}

void LinkWindow::displayAllScientists()
{
    vector<Scientist> scVec = service.searchSci("", '1');
    displayScientists(scVec);
}

void LinkWindow::displayAllComputers()
{
    vector<Computer> comVec = service.searchCom("", '1');
    displayComputers(comVec);
}

void LinkWindow::displayScientists(vector<Scientist> scVec)
{
    ui->list_scientists->clear();

    for (size_t i = 0; i < scVec.size(); i++)
    {
        Scientist currentScientist = scVec[i];

        ui->list_scientists->addItem(QString::fromStdString(currentScientist.getName()));
    }
}

void LinkWindow::displayComputers(vector<Computer> comVec)
{
    ui->list_computers->clear();

    for (size_t i = 0; i < comVec.size(); i++)
    {
        Computer computer = comVec[i];

        ui->list_computers->addItem(QString::fromStdString(computer.getName()));
    }
}

