#ifndef SEARCHCARD_H
#define SEARCHCARD_H

#include <QDialog>

namespace Ui {
class SearchCard;
}

class SearchCard : public QDialog
{
    Q_OBJECT

public:
    explicit SearchCard(QWidget *parent = 0);
    ~SearchCard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchCard *ui;
};

#endif // SEARCHCARD_H
