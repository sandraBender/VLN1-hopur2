#ifndef ADDCOMP_H
#define ADDCOMP_H

#include <QDialog>

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

private:
    Ui::AddComp *ui;
};

#endif // ADDCOMP_H
