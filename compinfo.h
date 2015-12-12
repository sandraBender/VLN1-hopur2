#ifndef COMPINFO_H
#define COMPINFO_H

#include <QDialog>

namespace Ui {
class compinfo;
}

class compinfo : public QDialog
{
    Q_OBJECT

public:
    explicit compinfo(QWidget *parent = 0);
    ~compinfo();

private:
    Ui::compinfo *ui;
};

#endif // COMPINFO_H
