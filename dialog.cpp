#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlQueryModel>
#include <QTableView>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
using namespace std;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{   QString q1,q2,q3,q4,q5,q6,q7,q8;
    q1.clear();
    q2.clear();
    q3.clear();
    q4.clear();
    q5.clear();
    q6.clear();
    q7.clear();
    q8.clear();
    q1=ui->lineEdit_3->text();
    q2=ui->lineEdit_4->text();
    q3=ui->lineEdit_7->text();
    q4=ui->lineEdit_5->text();
    q5=ui->lineEdit_6->text();
    q6=ui->lineEdit_8->text();
    q7=ui->lineEdit->text();
    q8=ui->lineEdit_2->text();

    int i1,i2,i3,i4;
    QSqlQuery query;
    if(!q1.isEmpty()){
        query.prepare("select * from Book where Title=?");
        query.addBindValue(q1);
        query.exec();
    }
    else if(!q2.isEmpty()){
        query.prepare("select * from Book where Press=? ");
        query.addBindValue(q2);
        query.exec();
    }
    else if(!q3.isEmpty()){
        query.prepare("select * from Book where Author=? ");
        query.addBindValue(q3);
        query.exec();
    }
    else if(!q4.isEmpty()&&!q5.isEmpty()){
        i1=q4.toInt();
        i2=q5.toInt();
        query.prepare("select * from Book where Year>=? and Year<=? ");
        query.bindValue(0,q4);
        query.bindValue(1,q5);
        query.exec();
    }
    else if(!q6.isEmpty()&&!q7.isEmpty()){
        i3=q6.toInt();
        i4=q7.toInt();
        query.prepare("select * from Book where Price>=? and Price<=? ");
        query.bindValue(0,q6);
        query.bindValue(1,q7);
        query.exec();
    }
    else if(!q8.isEmpty()){
        query.prepare("select * from Book where Category=? ");
        query.addBindValue(q8);
        query.exec();
    }

    if(query.size()==0){
        QMessageBox::critical(this,"Notify","该书不存在\n");
    }

    QSqlQueryModel *Model = new QSqlQueryModel;
    Model->setQuery(query);
    Model->setHeaderData(0,Qt::Horizontal,tr("书号"));
    Model->setHeaderData(1,Qt::Horizontal,tr("类别"));
    Model->setHeaderData(2,Qt::Horizontal,tr("书名"));
    Model->setHeaderData(3,Qt::Horizontal,tr("出版社"));
    Model->setHeaderData(4,Qt::Horizontal,tr("年份"));
    Model->setHeaderData(5,Qt::Horizontal,tr("作者"));
    Model->setHeaderData(6,Qt::Horizontal,tr("价格（元）"));
    Model->setHeaderData(7,Qt::Horizontal,tr("总藏书量（本）"));
    Model->setHeaderData(8,Qt::Horizontal,tr("库存（本）"));
    ui->tableView->setModel(Model);

}

void Dialog::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
}
