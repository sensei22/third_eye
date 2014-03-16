#ifndef AUTOR_H
#define AUTOR_H

#include <QDialog>

namespace Ui {
class autor;
}

class autor : public QDialog
{
    Q_OBJECT

public:
    explicit autor(QWidget *parent = 0);
    ~autor();

private:
    Ui::autor *ui;
};

#endif // AUTOR_H
