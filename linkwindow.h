#ifndef LINKWINDOW_H
#define LINKWINDOW_H

#include <QDialog>
#include <vector>
#include "service.h"


namespace Ui {
class LinkWindow;
}

class LinkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LinkWindow(QWidget *parent = 0);
    ~LinkWindow();

private slots:
    void on_Button_link_clicked();
    void on_list_scientists_clicked();
    void on_list_computers_clicked();
    void on_table_known_relations_clicked();
    void on_button_close_clicked();
    void on_button_remove_link_clicked();
    
private:
    void displayAllScientists();
    void displayAllComputers();
    void displayScientists(vector<Scientist> scVec);
    void displayComputers(vector<Computer> comVec);
    void displayLinks();
    Service service;
    Ui::LinkWindow *ui;
    bool compclicked;
    bool sciclicked;
};

#endif // LINKWINDOW_H
