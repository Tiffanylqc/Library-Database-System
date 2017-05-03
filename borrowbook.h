#ifndef BORROWBOOK_H
#define BORROWBOOK_H

#include <QDialog>

namespace Ui {
class BorrowBook;
}

class BorrowBook : public QDialog
{
    Q_OBJECT

public:
    explicit BorrowBook(QWidget *parent = 0);
    ~BorrowBook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BorrowBook *ui;
};

#endif // BORROWBOOK_H
