#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("LibraryDatabase");
    db.setUserName("root");
    db.setPassword("");
    if (!db.open()){
        QMessageBox *b=new QMessageBox;
        QMessageBox::critical(b,"Notify","无法连接到数据库");
    }

    return a.exec();
}
