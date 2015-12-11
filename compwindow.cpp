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
    vector<Computer> vec = serv.searchSci(searchstr, '2');
    //displayComputers(vec);
}

void CompWindow::displayComputers(std::vector<Computer> compVec)
{
    /*ui->table_scientist->clearContents();
    ui->table_scientist->setRowCount(scivec.size());

    for(unsigned int row = 0; row < scivec.size(); row++){
        Scientist currentScientist = scivec.at(row);

        QString name = QString::fromStdString(currentScientist.getName());
        bool built = currentScientist.getBuiltOrNot;
        QString yearBuilt = QString::number(currentScientist.getYearInvented());
        QString type = QString::fromStdString(currentScientist.getType());

        ui->table_computers->setItem(row, 0, new QTableWidgetItem(name))
        //ui->table_scientist->setItem(row, 1, new QTableWidgetItem(yob));
        //ui->table_scientist->setItem(row, 2, new QTableWidgetItem(yod));
        //ui->table_scientist->setItem(row, 3, new QTableWidgetItem(gender));

    }
    currentlyDisplayed = scivec;*/
}
