#ifndef LINKWINDOW_H
#define LINKWINDOW_H

#include <QDialog>

namespace Ui {
class LinkWindow;
}

class LinkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LinkWindow(QWidget *parent = 0);
    ~LinkWindow();

private:
    Ui::LinkWindow *ui;
};

#endif // LINKWINDOW_H