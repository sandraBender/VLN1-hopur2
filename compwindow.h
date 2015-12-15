#ifndef COMPWINDOW_H
#define COMPWINDOW_H

#include <QDialog>
#include "computer.h"
#include "service.h"
#include "addcomp.h"

namespace Ui {
class CompWindow;
}

class CompWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CompWindow(QWidget *parent = 0);
    void displayAllComputers(string searchStr);
    void displayAllComputers(string searchStr, char number);
    ~CompWindow();

private slots:
    void on_button_add_new_clicked();

    void on_button_close_clicked();

    void on_line_filter_computers_textChanged();

    void on_table_computers_clicked();

    void on_button_remove_selected_clicked();


    void on_table_computers_doubleClicked();

private:
    Ui::CompWindow *ui;
    void displayComputers(std::vector<Computer> compVec);
    Service serv;
    AddComp addComputer;
    vector<Computer> currentlyDisplayed;
};

#endif // COMPWINDOW_H
