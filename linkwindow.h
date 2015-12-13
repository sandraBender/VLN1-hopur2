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

    void on_list_scientists_clicked(const QModelIndex &index);

    void on_list_computers_clicked(const QModelIndex &index);

    void on_list_known_relations_clicked(const QModelIndex &index);

private:
    void displayAllScientists();
    void displayAllComputers();
    void displayScientists(vector<Scientist> scVec);
    void displayComputers(vector<Computer> comVec);
    Service service;
    Ui::LinkWindow *ui;
    bool compclicked;
    bool sciclicked;
};

#endif // LINKWINDOW_H
