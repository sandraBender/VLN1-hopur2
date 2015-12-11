#ifndef COMPWINDOW_H
#define COMPWINDOW_H

#include <QDialog>
#include "computer.h"
#include "service.h"

namespace Ui {
class CompWindow;
}

class CompWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CompWindow(QWidget *parent = 0);
    ~CompWindow();

private slots:
    void on_button_add_new_clicked();

    void on_button_close_clicked();

    void on_line_filter_computers_textChanged(const QString &arg1);

    void on_table_computers_clicked(const QModelIndex &index);

    void on_button_remove_selected_clicked();
    
private:
    Ui::CompWindow *ui;
    void displayAllComputers(string searchStr);
    void displayComputers(std::vector<Computer> compVec);
    Service serv;
    vector<Computer> currentlyDisplayed;
};

#endif // COMPWINDOW_H
