#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "searchcard.h"
#include "returnbook.h"
#include "borrowbook.h"
#include "addbook.h"
#include "managecard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog *d=new Dialog();
    d->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    SearchCard *a=new SearchCard();
    a->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ReturnBook *a=new ReturnBook();
    a->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    BorrowBook *a=new BorrowBook();
    a->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    AddBook *a = new AddBook();
    a->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    ManageCard *a=new ManageCard();
    a->show();
}
