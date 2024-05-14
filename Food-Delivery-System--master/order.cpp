#include "order.h"
#include "UserCustomer.h"
#include "qsqlerror.h"
#include "ui_order.h"
#include "datastruct.h"
#include "CustomerMain.h"
#include "dialog.h"
#include <QSqlQuery>
#include <QDebug>
#include <string>
#include <sstream>
using namespace std;
extern double allmoney;
extern food food11;
extern food food12;
extern food food13;
extern food food14;
extern food food15;
extern food food16;
extern int consumerid;

extern int preconsumerid;

extern vector<consumer> consumerlist;
extern int orderid;
extern int preorderid;

extern vector<deliver> deliverlist;
extern vector<orders>  orderlist;



order::order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::order)
{
    ui->setupUi(this);
}

order::~order()
{
    delete ui;
}

void order::initial()
{
    //loading food


    QString dd;

    food11.food1("Fried Rice \n Rice, Shrimp, carrot, greens beans","",0,15);
    ui->food11->setText("Name："+food11.name);
    //ui->food11->append(food11.name);
    dd=QString::number(food11.money);
    ui->food11->append(dd);
    ui->food11->append("Price："+dd);


    food12.food1("Dumplings \n pork, green onions","",1,10);
    ui->food12->setText("Name：");
    ui->food12->append(food12.name);
    ui->food12->append("Price：");
    dd=QString::number(food12.money);
    ui->food12->append(dd);


    food13.food1("Fried Noodle \n noodle, beef, carrot, cabbage ","",2,18);
    ui->food13->setText("Name：");
    ui->food13->append(food13.name);
    ui->food13->append("Price：");
    dd=QString::number(food13.money);
    ui->food13->append(dd);

    food14.food1("Mapo Doufu \n tofu, spicy red bean sauce, galic","",3,20);
    ui->food14->setText("Name：");
    ui->food14->append(food14.name);
    ui->food14->append("Price：");
    dd=QString::number(food14.money);
    ui->food14->append(dd);

    food15.food1("Soft Drinks","",4,2);
    ui->food15->setText("Name：");
    ui->food15->append(food15.name);
    ui->food15->append("Price：");
    dd=QString::number(food15.money);
    ui->food15->append(dd);


    food16.food1("Veggie Soup \n seasonal vegetables","",5,10);
    ui->food16->setText("Name：");
    ui->food16->append(food16.name);
    ui->food16->append("Price：");
    dd=QString::number(food16.money);
    ui->food16->append(dd);

}

void order::on_pushButton_4_clicked()  // back
{
    this->close();

}


void order::on_pushButton_3_clicked() //add to cart
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString("C:\\Users\\ramse\\Desktop\\CSC322\\Food-Delivery-System--master\\demodb.db"));
    QSqlQuery qry;
    Dialog pay;

    int Menucount = 0;

    int customerID = dataStore.getCustomerID();
    QString username = dataStore.getUsername();
    db.open();

    if(qry.exec("SELECT * FROM Menu")){
        while(qry.next()){
            Menucount = Menucount + 1;
        }
        qDebug() << "Number of menu Items: " << Menucount;
    }

    int Qant1 = ui->food11c->value();
    int Qant2 = ui->food12c->value();
    int Qant3 = ui->food13c->value();
    int Qant4 = ui->food14c->value();
    int Qant5 = ui->food15_c->value();
    int Qant6 = ui->food16c->value();

    for(int i = 0; i < Qant1; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 1);
        qry.bindValue(":menuName", "Fried Rice");
        qry.bindValue(":price", 15.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant2; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 2);
        qry.bindValue(":menuName", "Dumplings \n pork");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant3; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 3);
        qry.bindValue(":menuName", "Fried Noodle \n noodle");
        qry.bindValue(":price", 18.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant4; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 4);
        qry.bindValue(":menuName", "Mapo Doufu \n tofu");
        qry.bindValue(":price", 20.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant5; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 5);
        qry.bindValue(":menuName", "Soft Drinks");
        qry.bindValue(":price", 2.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant6; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 6);
        qry.bindValue(":menuName", "Veggie Soup \n seasonal vegetables");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    this->close();
    pay.setModal(true);
    pay.exec();


}

void order::on_pushButton_5_clicked()
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString("C:\\Users\\ramse\\Desktop\\CSC322\\Food-Delivery-System--master\\demodb.db"));
    QSqlQuery qry;
    Dialog pay;

    int Menucount = 0;

    int customerID = dataStore.getCustomerID();
    QString username = dataStore.getUsername();
    db.open();

    if(qry.exec("SELECT * FROM Menu")){
        while(qry.next()){
            Menucount = Menucount + 1;
        }
        qDebug() << "Number of menu Items: " << Menucount;
    }

    int Qant1 = ui->food11c->value();
    int Qant2 = ui->food12c->value();
    int Qant3 = ui->food13c->value();
    int Qant4 = ui->food14c->value();
    int Qant5 = ui->food15_c->value();
    int Qant6 = ui->food16c->value();

    for(int i = 0; i < Qant1; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 1);
        qry.bindValue(":menuName", "Fried Rice");
        qry.bindValue(":price", 15.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant2; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 2);
        qry.bindValue(":menuName", "Dumplings \n pork");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant3; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 3);
        qry.bindValue(":menuName", "Fried Noodle \n noodle");
        qry.bindValue(":price", 18.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant4; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 4);
        qry.bindValue(":menuName", "Mapo Doufu \n tofu");
        qry.bindValue(":price", 20.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant5; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 5);
        qry.bindValue(":menuName", "Soft Drinks");
        qry.bindValue(":price", 2.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant6; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 6);
        qry.bindValue(":menuName", "Veggie Soup \n seasonal vegetables");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    this->close();
    pay.setModal(true);
    pay.exec();

}


void order::on_pushButton_6_clicked()
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString("C:\\Users\\ramse\\Desktop\\CSC322\\Food-Delivery-System--master\\demodb.db"));
    QSqlQuery qry;
    Dialog pay;

    int Menucount = 0;

    int customerID = dataStore.getCustomerID();
    QString username = dataStore.getUsername();
    db.open();

    if(qry.exec("SELECT * FROM Menu")){
        while(qry.next()){
            Menucount = Menucount + 1;
        }
        qDebug() << "Number of menu Items: " << Menucount;
    }

    int Qant1 = ui->food11c->value();
    int Qant2 = ui->food12c->value();
    int Qant3 = ui->food13c->value();
    int Qant4 = ui->food14c->value();
    int Qant5 = ui->food15_c->value();
    int Qant6 = ui->food16c->value();

    for(int i = 0; i < Qant1; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 1);
        qry.bindValue(":menuName", "Fried Rice");
        qry.bindValue(":price", 15.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant2; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 2);
        qry.bindValue(":menuName", "Dumplings \n pork");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant3; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 3);
        qry.bindValue(":menuName", "Fried Noodle \n noodle");
        qry.bindValue(":price", 18.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant4; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 4);
        qry.bindValue(":menuName", "Mapo Doufu \n tofu");
        qry.bindValue(":price", 20.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant5; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 5);
        qry.bindValue(":menuName", "Soft Drinks");
        qry.bindValue(":price", 2.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    for(int i = 0; i < Qant6; i++) {
        qry.prepare("INSERT INTO Orders (CustomerID, Username, MenuNum, MenuName, Price, Confirm) "
                    "VALUES (:customerID, :username, :menuNum, :menuName, :price, :confirm)");
        qry.bindValue(":customerID", customerID);
        qry.bindValue(":username", username);
        qry.bindValue(":menuNum", 6);
        qry.bindValue(":menuName", "Veggie Soup \n seasonal vegetables");
        qry.bindValue(":price", 10.0);
        qry.bindValue(":confirm", "No");
        qry.exec();

        if (qry.exec()) {
            qDebug() << "Order inserted successfully.";
        } else {
            qDebug() << "Failed to insert order:" << qry.lastError().text();
        }
    }

    this->close();
    pay.setModal(true);
    pay.exec();

}

