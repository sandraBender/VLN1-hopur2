#include "compwindow.h"
#include "ui_compwindow.h"
#include "addcomp.h"
#include <QStatusBar>
#include "compinfo.h"
using namespace std;

CompWindow::CompWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompWindow)
{
    ui->setupUi(this);
    displayAllComputers("");
}

CompWindow::~CompWindow()
{
    delete ui;
}

void CompWindow::on_button_add_new_clicked()
{
    AddComp addComputer;
    ui->label_Remove_success->setText("");

    int addComputerReturnValue = addComputer.exec();

    if (addComputerReturnValue == 0)
    {
        ui->label_Remove_success->setText("");
        displayAllComputers("");
    }
    else
    {
        //ui->label_Remove_success->setText("");
    }
}

void CompWindow::on_button_close_clicked()
{
    close();
}

void CompWindow::on_line_filter_computers_textChanged(const QString &arg1)
{
    string searchStr = ui->line_filter_computers->text().toStdString();
    displayAllComputers(searchStr);
}

void CompWindow::displayAllComputers(string searchStr)
{
    ui->table_computers->setSortingEnabled(false);
    vector<Computer> vec = serv.searchCom(searchStr, '1');
    displayComputers(vec);
    ui->table_computers->setSortingEnabled(true);
}

void CompWindow::displayComputers(std::vector<Computer> compVec)
{
    ui->table_computers->clearContents();
    ui->table_computers->setRowCount(compVec.size());

    for(unsigned int row = 0; row < compVec.size(); row++){
        Computer currentComputer = compVec.at(row);

        QString name = QString::fromStdString(currentComputer.getName());
        QString yearBuilt;
        bool built = currentComputer.getBuiltOrNot();
        if(built == true)
            yearBuilt = QString::number(currentComputer.getYearInvented());
        else
            yearBuilt = "Not Built";
        QString type = QString::fromStdString(currentComputer.getType());

        ui->table_computers->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_computers->setItem(row, 1, new QTableWidgetItem(yearBuilt));
        ui->table_computers->setItem(row, 2, new QTableWidgetItem(type));
        ui->table_computers->setColumnWidth(0,150);

    }
    currentlyDisplayed = compVec;
}

void CompWindow::on_table_computers_clicked(const QModelIndex &index)
{
    ui->button_remove_selected->setEnabled(true);
}

void CompWindow::on_button_remove_selected_clicked()
{
    QString compname = ui->table_computers->item(ui->table_computers->currentIndex().row(), 0)->text();
    serv.deleteData('2', compname);
    ui->line_filter_computers->clear();
    ui->label_Remove_success->setText("Computer was successfully removed");
    displayAllComputers("");
}

void CompWindow::on_table_computers_doubleClicked(const QModelIndex &index)
{
    QString name = ui->table_computers->item(ui->table_computers->currentIndex().row(), 0)->text();
    compinfo info;
    info.setInfo(name, currentlyDisplayed);
    info.displayscis(name);
    info.exec();
}
