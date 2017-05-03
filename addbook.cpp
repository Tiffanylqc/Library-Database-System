#include "addbook.h"
#include "ui_addbook.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::on_pushButton_clicked()
{
    QString q1=ui->lineEdit->text();
    QString q2=ui->lineEdit_2->text();
    QString q3=ui->lineEdit_3->text();
    QString q4=ui->lineEdit_4->text();
    QString q5=ui->lineEdit_5->text();
    QString q6=ui->lineEdit_6->text();
    QString q7=ui->lineEdit_7->text();
    QString q8=ui->lineEdit_8->text();
    QSqlQuery query,query1;

    query1.prepare("select * from Book where Bno=?");
    query1.bindValue(0,q1);
    query1.exec();

    if((query1.size())!=0){
        QMessageBox::critical(this,"Notify","该书已存在！");
        return;
    }
    query.prepare("insert into Book values(?,?,?,?,?,?,?,?,?)");
    query.bindValue(0,q1);
    query.bindValue(1,q2);
    query.bindValue(2,q3);
    query.bindValue(3,q4);
    query.bindValue(4,q5);
    query.bindValue(5,q6);
    query.bindValue(6,q7);
    query.bindValue(7,q8);
    query.bindValue(8,q8);
    query.exec();
    QMessageBox::information(this,"Notify","添加成功！");

}
