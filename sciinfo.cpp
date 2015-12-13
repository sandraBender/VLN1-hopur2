#include "sciinfo.h"
#include "ui_sciinfo.h"
#include "sciwindow.h"

sciinfo::sciinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sciinfo)
{

    ui->setupUi(this);
}

sciinfo::~sciinfo()
{
    delete ui;
}

void sciinfo::setInfo(QString name, vector<Scientist> currentscis)
{
    string name1 = name.toStdString();
    QString yob;
    QString yod;
    string tempgender;

    for(unsigned int i = 0; i < currentscis.size(); i++)
        if(currentscis[i].getName() == name1){
            yob = QString::number(currentscis[i].getYob());
            yod = QString::number(currentscis[i].getYod());
            tempgender = currentscis[i].getGender();
           }

    QString gender = QString::fromStdString(tempgender);
    QString bornText;
    if(yod == "0")
        bornText = yob + "- now";
    else
        bornText = yob + " - " + yod;

    ui->label_name->setText(name);
    ui->label_born->setText(bornText);
    ui->label_gender->setText(gender);
}

void sciinfo::on_button_close_clicked()
{
    close();
}

void sciinfo::displaycomps(QString name)
{
    vector<QString> sci = serv.getRelations(1);
    vector<QString> comp = serv.getRelations(2);

    for(unsigned int i = 0; i < sci.size(); i++){
        if(name == sci[i])
            ui->list_related_comps->addItem(comp[i]);

    }
}
