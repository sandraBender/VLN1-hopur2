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

void sciinfo::setInfo()
{
    SciWindow sw;
    QString name = sw.getName();
    string name1 = name.toStdString();
    QString yob;
    int yod;
    QString bornText = "Born in " + yob;
    QString gender;

    vector<Scientist> currentscis = sw.getCurrent();
    for(unsigned int i = 0; i < currentscis.size(); i++)
        if(currentscis[i].getName() == name1){
            yob = currentscis[i].getYob();
            yod = currentscis[i].getYod();
            gender = currentscis[i].getGender();
           }

    ui->label_name->setText(name);
    ui->label_born
}
