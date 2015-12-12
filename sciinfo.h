#ifndef SCIINFO_H
#define SCIINFO_H

#include <QDialog>

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
    void setInfo();
};

#endif // SCIINFO_H
