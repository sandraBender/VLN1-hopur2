#include "compwindow.h"
#include "ui_compwindow.h"
#include "addcomp.h"

using namespace std;

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

void CompWindow::on_line_filter_computers_textChanged(const QString &arg1)
{
    string searchStr = ui->line_filter_computers->text().toStdString();
    //displayAllComputers(searchStr);
}

void CompWindow::displayAllComputers(string searchStr)
{
    vector<Computer> vec = serv.searchCom(searchStr, '1');
    //displayComputers(vec);
}

void CompWindow::displayComputers(std::vector<Computer> compVec)
{
    ui->table_computers->clearContents();
    ui->table_computers->setRowCount(compVec.size());

    for(unsigned int row = 0; row < compVec.size(); row++){
        Computer currentComputer = compVec.at(row);

        QString name = QString::fromStdString(currentComputer.getName());
        bool built = currentComputer.getBuiltOrNot();
        QString yearBuilt = QString::number(currentComputer.getYearInvented());
        QString type = QString::fromStdString(currentComputer.getType());

        ui->table_computers->setItem(row, 0, new QTableWidgetItem(name));
        //ui->table_scientist->setItem(row, 1, new QTableWidgetItem(yob));
        //ui->table_scientist->setItem(row, 2, new QTableWidgetItem(yod));
        //ui->table_scientist->setItem(row, 3, new QTableWidgetItem(gender));

    }
    currentlyDisplayed = compVec;
}