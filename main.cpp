#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QSqlError>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QString serverName = "DESKTOP-5QAIEB1\\SQLEXPRESS";
    QString dbName = "DeliSys";

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();

    QString dsn = QString("DRIVER={SQL SERVER};Server=%1;Database=%2;Trusted_Connection=True;").arg(serverName).arg(dbName);

    db.setDatabaseName(dsn);

    if (db.open()) {
        qDebug() << "Opened!!!";
        db.close();
    }
    else {
        qDebug() << "Error connecting to database:" << db.lastError().text();
        qDebug() << "Connection string used:" << dsn;
    }


    w.show();
    return a.exec();
}
