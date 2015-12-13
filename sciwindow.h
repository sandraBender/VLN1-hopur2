#ifndef SCIWINDOW_H
#define SCIWINDOW_H

#include <QDialog>
#include "addsci.h"
#include "service.h"
#include <vector>
#include <QChar>

namespace Ui {
class SciWindow;
}

class SciWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SciWindow(QWidget *parent = 0);
    void displayAllScientists(string searchstr);
    vector<Scientist> getCurrent();
    QString getName();

    ~SciWindow();

private slots:

    void on_button_addsci_clicked();

    void on_filter_scientists_textChanged();

    void on_table_scientist_clicked();

    void on_button_remove_student_clicked();

    void on_button_close_clicked();

    void on_table_scientist_doubleClicked(const QModelIndex &index);

private:
    void displayScientists(std::vector<Scientist> scivec);
    Ui::SciWindow *ui;
    AddSci addScientist;
    Service serv;
    vector<Scientist> currentlyDisplayed;
};

#endif // SCIWINDOW_H
