#include "linking.h"
#include "ui_linking.h"

Linking::Linking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Linking)
{
    ui->setupUi(this);
}

Linking::~Linking()
{
    delete ui;
}
