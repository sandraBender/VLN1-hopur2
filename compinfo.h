#ifndef COMPINFO_H
#define COMPINFO_H

#include <QDialog>
#include "computer.h"
#include "service.h"

namespace Ui {
class compinfo;
}

class compinfo : public QDialog
{
    Q_OBJECT

public:
    void setInfo(QString name, vector<Computer> currentcomp);
    explicit compinfo(QWidget *parent = 0);
    void displayscis(QString name);
    ~compinfo();

private slots:
    void on_button_close_clicked();

private:
    Ui::compinfo *ui;
    Service serv;
};

#endif // COMPINFO_H
