#ifndef SCIINFO_H
#define SCIINFO_H

#include <QDialog>
#include "scientist.h"

namespace Ui {
class sciinfo;
}

class sciinfo : public QDialog
{
    Q_OBJECT

public:
    explicit sciinfo(QWidget *parent = 0);
    ~sciinfo();

private:
    Ui::sciinfo *ui;
    void setInfo(QString name, vector<Scientist> currentscis);
};

#endif // SCIINFO_H
