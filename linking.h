#ifndef LINKING_H
#define LINKING_H

#include <QMainWindow>

namespace Ui {
class Linking;
}

class Linking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Linking(QWidget *parent = 0);
    ~Linking();

private:
    Ui::Linking *ui;
};

#endif // LINKING_H
