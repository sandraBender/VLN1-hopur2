#include "compinfo.h"
#include "ui_compinfo.h"

compinfo::compinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::compinfo)
{
    ui->setupUi(this);
}

compinfo::~compinfo()
{
    delete ui;
}
