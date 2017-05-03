#include "searchcard.h"
#include "ui_searchcard.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
SearchCard::SearchCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchCard)
{
    ui->setupUi(this);
}

SearchCard::~SearchCard()
{
    delete ui;
}

void SearchCard::on_pushButton_clicked()
{
    QString q1=ui->lineEdit->text();
    QSqlQuery query,query1;
    query.prepare("select * from Card where Cno=?");
    query.addBindValue(q1);
    query.exec();
    QSqlQueryModel *Model = new QSqlQueryModel;
    QSqlQueryModel *Model1 = new QSqlQueryModel;

    if(query.size()==0){
        QMessageBox::critical(this,"Notify","无该卡信息\n请检查卡号");
    }

    Model->setQuery(query);
    Model->setHeaderData(0,Qt::Horizontal,tr("卡号"));
    Model->setHeaderData(1,Qt::Horizontal,tr("姓名"));
    Model->setHeaderData(2,Qt::Horizontal,tr("院系"));
    Model->setHeaderData(3,Qt::Horizontal,tr("类别"));
    ui->tableView->setModel(Model);

    query1.prepare("select Title,BorrowDate,ReturnDate from BorrowBook natural join Book where Cno=? ");
    query1.addBindValue(q1);
    query1.exec();
    Model1->setQuery(query1);
    Model1->setHeaderData(0,Qt::Horizontal,tr("书名"));
    Model1->setHeaderData(1,Qt::Horizontal,tr("借书日期"));
    Model1->setHeaderData(2,Qt::Horizontal,tr("应还日期"));
    ui->tableView_2->setModel(Model1);
}
