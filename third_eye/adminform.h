#ifndef ADMINFORM_H
#define ADMINFORM_H

#include <QDialog>

namespace Ui {
class adminform;
}

class adminform : public QDialog
{
    Q_OBJECT

public:
    explicit adminform(QWidget *parent = 0);
    ~adminform();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::adminform *ui;
};

#endif // ADMINFORM_H
