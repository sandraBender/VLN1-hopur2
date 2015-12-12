#include "sciwindow.h"
#include "ui_sciwindow.h"
#include "sciinfo.h"

using namespace std;

SciWindow::SciWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SciWindow)
{
    ui->setupUi(this);
    displayAllScientists("");
}

SciWindow::~SciWindow()
{
    delete ui;
}

void SciWindow::on_button_addsci_clicked()
{
    ui->label_successRemove->setText("");
    int addScientistReturnValue = addScientist.exec();

    if (addScientistReturnValue == 0)
    {
        ui->label_successRemove->setText("");
        displayAllScientists("");
    }
    else
    {
        //ui->label_successRemove->setText("");
    }

}


void SciWindow::on_filter_scientists_textChanged()
{
    string searchStr = ui->filter_scientists->text().toStdString();
    displayAllScientists(searchStr);
}

void SciWindow::displayAllScientists(string searchstr)
{
    ui->table_scientist->setSortingEnabled(false);
    vector<Scientist> vec = serv.searchSci(searchstr, '1');
    displayScientists(vec);
    ui->table_scientist->setSortingEnabled(true);
}

vector<Scientist> SciWindow::getCurrent()
{
    return currentlyDisplayed;
}

QString SciWindow::getName()
{
    return ui->table_scientist->item(ui->table_scientist->currentIndex().row(), 0)->text();
}

void SciWindow::displayScientists(std::vector<Scientist> scivec)
{
    ui->table_scientist->clearContents();
    ui->table_scientist->setRowCount(scivec.size());

    for(unsigned int row = 0; row < scivec.size(); row++){
        Scientist currentScientist = scivec.at(row);

        QString name = QString::fromStdString(currentScientist.getName());
        QString yob = QString::number(currentScientist.getYob());
        QString yod = QString::number(currentScientist.getYod());
            if(yod == "0")
                yod = "Alive";
        QString gender = QString::fromStdString(currentScientist.getGender());

        int year_born = currentScientist.getYob();
        int year_dead = currentScientist.getYod();

        if (year_dead == 0)
        {
            year_dead = 2015;
        }
        int age = year_dead - year_born;
        QString ageOfScientist = QString::number(age);
        ui->table_scientist->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_scientist->setItem(row, 1, new QTableWidgetItem(yob));
        ui->table_scientist->setItem(row, 2, new QTableWidgetItem(yod));
        ui->table_scientist->setItem(row, 3, new QTableWidgetItem(ageOfScientist));
        ui->table_scientist->setItem(row, 4, new QTableWidgetItem(gender));

        ui->table_scientist->setColumnWidth(0, 150);

    }
    currentlyDisplayed = scivec;
}



void SciWindow::on_table_scientist_clicked()
{
    ui->button_remove_student->setEnabled(true);
}

void SciWindow::on_button_remove_student_clicked()
{
   QString sciName = ui->table_scientist->item(ui->table_scientist->currentIndex().row(), 0)->text();

   serv.deleteData('1', sciName);
   ui->label_successRemove->setText("Scientist was successfully removed");
   ui->filter_scientists->clear();
   displayAllScientists("");
}

void SciWindow::on_button_close_clicked()
{
    ui->filter_scientists->clear();
    close();
}

void SciWindow::on_table_scientist_doubleClicked(const QModelIndex &index)
{
    sciinfo info;
    info.exec();

}
