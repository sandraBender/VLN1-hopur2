#include "sciinfo.h"
#include "ui_sciinfo.h"
#include "sciwindow.h"

sciinfo::sciinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sciinfo)
{
    SciWindow sw;
    QString name = sw.getName();
    vector<Scientist> currentscis = sw.getCurrent();
    setInfo(name, currentscis);
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
            yob = currentscis[i].getYob();
            yod = currentscis[i].getYod();
            tempgender = currentscis[i].getGender();
           }

    QString gender = QString::fromStdString(tempgender);
    QString bornText;
    if(yod == "0")
        bornText = yob + " - " + yod;
    else
        bornText = yob + "- Now";

    ui->label_name->setText(name);
    ui->label_born->setText(bornText);
    ui->label_gender->setText(gender);
}
