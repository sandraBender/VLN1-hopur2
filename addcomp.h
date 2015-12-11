#ifndef ADDCOMP_H
#define ADDCOMP_H

#include <QDialog>
#include "service.h"

namespace Ui {
class AddComp;
}

class AddComp : public QDialog
{
    Q_OBJECT

public:
    explicit AddComp(QWidget *parent = 0);
    ~AddComp();

private slots:
    void on_button_close_clicked();

    void on_button_add_clicked();

private:
    Ui::AddComp *ui;
    void addcomputer();
    Service serv;

};

#endif // ADDCOMP_H
