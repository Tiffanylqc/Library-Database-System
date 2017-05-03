#include "borrowbook.h"
#include "ui_borrowbook.h"
#include <QSqlQuery>
#include <QString>
#include <QDate>
#include <QMessageBox>
BorrowBook::BorrowBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BorrowBook)
{
    ui->setupUi(this);
}

BorrowBook::~BorrowBook()
{
    delete ui;
}

void BorrowBook::on_pushButton_clicked()
{
    QString bno, cno,q1,q2;
    bno=ui->lineEdit->text();
    cno=ui->lineEdit_2->text();
    QSqlQuery query,query1,query2,query3,query4;
    QDate time,time1;
    time=QDate::currentDate();
    time1=time.addMonths(1);
    q1=time.toString("yyyy-MM-dd");
    q2=time1.toString("yyyy-MM-dd");

    query2.prepare("select * from Book where Bno=?");
    query2.bindValue(0,bno);
    query2.exec();
    if(query2.size()==0){
        QMessageBox::critical(this,"Notify","无相关书号信息\n请检查书号");
        return;
    }

    query3.prepare("select * from Card where Cno=?");
    query3.bindValue(0,cno);
    query3.exec();
    if(query3.size()==0){
        QMessageBox::critical(this,"Notify","无相关卡号信息\n请检查卡号");
        return;
    }

    query4.prepare("select * from Book where Bno=? and Stock>0");
    query4.bindValue(0,bno);
    query4.exec();
    if(query4.size()==0){
        QMessageBox::critical(this,"Notify","库存量不足，无可借书籍");
        return;
    }

    query1.prepare("update Book set Stock=Stock-1 where Bno=?");
    query1.bindValue(0,bno);
    query1.exec();

    query.prepare("insert into BorrowBook values(?,?,?,?)");
    query.bindValue(0,bno);
    query.bindValue(1,cno);
    query.bindValue(2,q1);
    query.bindValue(3,q2);
    query.exec();
    if(query.numRowsAffected()!=0){
        QMessageBox::information(this,"Notify","借书成功！");
    }
}
