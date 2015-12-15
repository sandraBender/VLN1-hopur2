#ifndef SCIINFO_H
#define SCIINFO_H
#include <QDialog>
#include "scientist.h"
#include "service.h"

namespace Ui
{
class sciinfo;
}

class sciinfo : public QDialog
{
    Q_OBJECT

public:
    explicit sciinfo(QWidget *parent = 0);
    void setInfo(QString name, vector<Scientist> currentscis);
    void displaycomps(QString name);
    ~sciinfo();

private slots:
    void on_button_close_clicked();

private:
    Ui::sciinfo *ui;
    Service serv;
};

#endif // SCIINFO_H
