#ifndef COMPWINDOW_H
#define COMPWINDOW_H

#include <QDialog>

namespace Ui {
class CompWindow;
}

class CompWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CompWindow(QWidget *parent = 0);
    ~CompWindow();

private:
    Ui::CompWindow *ui;
};

#endif // COMPWINDOW_H
