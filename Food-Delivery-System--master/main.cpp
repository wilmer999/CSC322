#include "Login.h"
#include <QApplication>
#include "database.h"
#include "vector"
#include "stdio.h"
#include "CustomerMain.h"
#include "datastruct.h"
#include <QSqlError>
#include <QtDebug>

using namespace std;
double allmoney;
food food11;
food food12;
food food13;
food food14;
food food15;
food food16;


int consumerid;
int deliverid;
int preconsumerid;
int predeliverid;
int orderid;
int preorderid;
vector<consumer> consumerlist;
vector<deliver> deliverlist;
vector<orders>  orderlist;



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    DatabaseLink& dbLink = DatabaseLink::instance();
    QString executablePath = QCoreApplication::applicationDirPath();

    dbLink.setConnectionName("QSQLITE");
    dbLink.setDatabaseName(QString (QString("C:\\Users\\ramse\\Desktop\\CSC322\\Food-Delivery-System--master\\build\\debug\\demodb.db")));

    qDebug() << "Executable Path: " << dbLink.databaseName();


    Widget w;
    w.show();
   return a.exec();
}
