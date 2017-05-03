#ifndef MANAGECARD_H
#define MANAGECARD_H

#include <QDialog>

namespace Ui {
class ManageCard;
}

class ManageCard : public QDialog
{
    Q_OBJECT

public:
    explicit ManageCard(QWidget *parent = 0);
    ~ManageCard();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ManageCard *ui;
};

#endif // MANAGECARD_H
