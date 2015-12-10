#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sciwindow.h"
#include "service.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_scientist_clicked();

private:
    Ui::MainWindow *ui;
    SciWindow scientistWindow;
    Service serv;
};

#endif // MAINWINDOW_H
