#ifndef SCIWINDOW_H
#define SCIWINDOW_H

#include <QDialog>
#include "addsci.h"
#include "service.h"

namespace Ui {
class SciWindow;
}

class SciWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SciWindow(QWidget *parent = 0);
    ~SciWindow();

private slots:

    void on_button_addsci_clicked();

    void on_filter_scientists_textChanged(const QString &arg1);

private:
    void displayAllScientists(string searchstr);
    void displayScientists(std::vector<Scientist> scivec);
    Ui::SciWindow *ui;
    AddSci addScientist;
    Service serv;
};

#endif // SCIWINDOW_H
