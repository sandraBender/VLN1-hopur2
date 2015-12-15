#include "compinfo.h"
#include "ui_compinfo.h"

void compinfo::setInfo(QString name, vector<Computer> currentcomp)
{
    string name1 = name.toStdString();
    QString yearBuilt;
    bool built;
    QString type;

    for(unsigned int i = 0; i < currentcomp.size(); i++){
        if(currentcomp[i].getName() == name1){
            yearBuilt = QString::number(currentcomp[i].getYearInvented());
            built = currentcomp[i].getBuiltOrNot();
            type = QString::fromStdString(currentcomp[i].getType());
        }
    }

    QString builtText;
    if(built)
        builtText = "Built in " + yearBuilt;
    else
        builtText = "Was not built";

    ui->label_name->setText(name);
    ui->label_built->setText(builtText);
    ui->label_type->setText(type);
}

compinfo::compinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::compinfo)
{
    ui->setupUi(this);
}

void compinfo::displayscis(QString name)
{
    vector<QString> sci = serv.getRelations(1);
    vector<QString> comp = serv.getRelations(2);

    for(unsigned int i = 0; i < sci.size(); i++){
        if(name == comp[i])
            ui->list_related_scientists->addItem(sci[i]);

    }
}

compinfo::~compinfo()
{
    delete ui;
}

void compinfo::on_button_close_clicked()
{
    close();
}
