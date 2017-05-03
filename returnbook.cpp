#include "returnbook.h"
#include "ui_returnbook.h"
#include <QSqlQuery>
#include <QDate>
#include <QMessageBox>
ReturnBook::ReturnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnBook)
{
    ui->setupUi(this);
}

ReturnBook::~ReturnBook()
{
    delete ui;
}

void ReturnBook::on_pushButton_clicked()
{
    QString bno,cno,q1;
    bno=ui->lineEdit->text();
    cno=ui->lineEdit_2->text();
    QDate time;
    time=QDate::currentDate();
    q1=time.toString("yyyy-MM-dd");
    QSqlQuery query,query1,query2,query3,query4;


    query4.prepare("select * from Book where Bno=?");
    query4.bindValue(0,bno);
    query4.exec();
    if(query.size()==0){
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

    query2.prepare("delete from BorrowBook where Bno=? and Cno=? ");
    query2.bindValue(0,bno);
    query2.bindValue(1,cno);
    query2.exec();
    if(query2.numRowsAffected()==0){
        QMessageBox::critical(this,"Notify","该卡号未借该书");
        return;
    }

    query.prepare("insert into ReturnBook(Bno,Cno,ReturnDate) values (?,?,?)");
    query.bindValue(0,bno);
    query.bindValue(1,cno);
    query.bindValue(2,q1);
    query.exec();
    query1.prepare("update Book set Stock=Stock+1 where Bno=? ");
    query1.bindValue(0,bno);
    query1.exec();
    QMessageBox::information(this,"Notify","还书成功");
}
