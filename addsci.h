#ifndef ADDSCI_H
#define ADDSCI_H

#include <QDialog>
#include "service.h"
namespace Ui {
class AddSci;
}

class AddSci : public QDialog
{
    Q_OBJECT

public:
    explicit AddSci(QWidget *parent = 0);
    bool addscientist();
    ~AddSci();

private slots:
    void on_button_add_clicked();

    void on_button_cancel_clicked();

private:
    Ui::AddSci *ui;
    Service serv;
};

#endif // ADDSCI_H
