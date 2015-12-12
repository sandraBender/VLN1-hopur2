#include "sciwindow.h"
#include "ui_sciwindow.h"

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
    int addScientistReturnValue = addScientist.exec();

    if (addScientistReturnValue == 0)
    {
        //ui->input_filter_students->setText("");
        displayAllScientists("");

        //ui->statusBar->showMessage("Successfully added student", 1500);
    }
    else
    {
        // DISPLAY AN ERROR
    }
}


void SciWindow::on_filter_scientists_textChanged()
{
    string searchStr = ui->filter_scientists->text().toStdString();
    displayAllScientists(searchStr);
}

void SciWindow::displayAllScientists(string searchstr)
{
    vector<Scientist> vec = serv.searchSci(searchstr, '1');
    displayScientists(vec);

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

        ui->table_scientist->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_scientist->setItem(row, 1, new QTableWidgetItem(yob));
        ui->table_scientist->setItem(row, 2, new QTableWidgetItem(yod));
        ui->table_scientist->setItem(row, 3, new QTableWidgetItem(gender));

    }
    currentlyDisplayed = scivec;
}

void SciWindow::on_table_scientist_clicked(const QModelIndex &index)
{
    ui->button_remove_student->setEnabled(true);
}

void SciWindow::on_button_remove_student_clicked()
{
   QString sciName = ui->table_scientist->item(ui->table_scientist->currentIndex().row(), 0)->text();

   serv.deleteData('1', sciName);

   displayAllScientists("");
}
