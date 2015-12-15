#include "linkwindow.h"
#include "ui_linkwindow.h"

LinkWindow::LinkWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinkWindow)
{
    ui->setupUi(this);
    ui->label_link_error->clear();
    displayLinks();
    displayAllScientists();
    displayAllComputers();
}

LinkWindow::~LinkWindow()
{
    delete ui;
}

void LinkWindow::on_Button_link_clicked()
{   ui->label_link_error->clear();
    string compname = ui->list_computers->item(ui->list_computers->currentRow())->text().toStdString();
    string sciname = ui->list_scientists->item(ui->list_scientists->currentRow())->text().toStdString();

    vector<QString> scinames = service.getRelations(1);
    vector<QString> compnames = service.getRelations(2);

    for(unsigned int i = 0; i < scinames.size(); i++){
        if(QString::fromStdString(compname) == compnames[i] && QString::fromStdString(sciname) == scinames[i]){
            ui->label_link_error->setText("<span style = 'color: #DC143C' > Relation already exists </span>");
        return;}
    }
    service.addDeleteLink(sciname, compname, '1');
    displayLinks();
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

void LinkWindow::displayLinks()
{
    vector<QString> scinames = service.getRelations(1);
    vector<QString> compnames = service.getRelations(2);

    ui->table_known_relations->clearContents();
    ui->table_known_relations->setRowCount(scinames.size());

    QString dash = "-";
    for(unsigned int row = 0; row < scinames.size(); row++){
        QString sci = scinames[row];
        QString comp = compnames[row];
        ui->table_known_relations->setItem(row, 0, new QTableWidgetItem(sci));
        ui->table_known_relations->setItem(row, 1, new QTableWidgetItem(dash));
        ui->table_known_relations->setItem(row, 2, new QTableWidgetItem(comp));
}
    ui->table_known_relations->setColumnWidth(0,150);
    ui->table_known_relations->setColumnWidth(1, 10);
    ui->table_known_relations->setColumnWidth(2, 150);
}


void LinkWindow::on_list_scientists_clicked()
{
    sciclicked = true;
    if(compclicked)
        ui->Button_link->setEnabled(true);
}

void LinkWindow::on_list_computers_clicked()
{
    compclicked = true;
    if(sciclicked)
        ui->Button_link->setEnabled(true);
}

void LinkWindow::on_table_known_relations_clicked()
{
    ui->button_remove_link->setEnabled(true);
}

void LinkWindow::on_button_close_clicked()
{
    close();
}

void LinkWindow::on_button_remove_link_clicked()
{
    string sciname = ui->table_known_relations->item(ui->table_known_relations->currentIndex().row(), 0)->text().toStdString();
    string compname = ui->table_known_relations->item(ui->table_known_relations->currentIndex().row(), 2)->text().toStdString();
    service.addDeleteLink(sciname, compname, '2');
    displayLinks();
}
