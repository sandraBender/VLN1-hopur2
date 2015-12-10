#include "sciwindow.h"
#include "ui_sciwindow.h"

using namespace std;

SciWindow::SciWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SciWindow)
{
    ui->setupUi(this);
}

SciWindow::~SciWindow()
{
    delete ui;
}

void SciWindow::on_button_addsci_clicked()
{
    addScientist.exec();
}


void SciWindow::on_filter_scientists_textChanged(const QString &arg1)
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
    ui->list_scientists->clear();
    for(unsigned int i = 0; i < scivec.size(); i++){
        ui->list_scientists->addItem(QString::fromStdString(scivec[i].getName()));
    }
}
