#include "managecard.h"
#include "ui_managecard.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

ManageCard::ManageCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageCard)
{
    ui->setupUi(this);
}

ManageCard::~ManageCard()
{
    delete ui;
}

void ManageCard::on_pushButton_clicked()
{
    QString q1=ui->lineEdit->text();
    QString q2=ui->lineEdit_2->text();
    QString q3=ui->lineEdit_3->text();
    QString q4=ui->lineEdit_4->text();

    QSqlQuery query,query1;

    query1.prepare("select * from Card where Cno=?");
    query1.bindValue(0,q1);
    query1.exec();

    if((query1.size())!=0){
        QMessageBox::critical(this,"Notify","该卡已存在！");
        return;
    }
    query.prepare("insert into Card values(?,?,?,?)");
    query.bindValue(0,q1);
    query.bindValue(1,q2);
    query.bindValue(2,q3);
    query.bindValue(3,q4);
    query.exec();
    QMessageBox::information(this,"Notify","添加成功！");
}

void ManageCard::on_pushButton_2_clicked()
{
    QString q1=ui->lineEdit_5->text();
    QSqlQuery query,query1;

    query1.prepare("select * from Card where Cno=?");
    query1.bindValue(0,q1);
    query1.exec();

    if(query1.size()==0){
        QMessageBox::critical(this,"Notify","该卡不存在！");
        return;
    }
    query.prepare("delete from Card where Cno=?");
    query.bindValue(0,q1);
    query.exec();
    QMessageBox::information(this,"Notify","删除成功！");
}
