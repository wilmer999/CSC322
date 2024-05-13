#include "Login.h"
#include "signup.h"
#include "ui_widget.h"
#include "vector"
#include "stdio.h"
#include "datastruct.h"
#include <QString>
#include"CustomerMain.h"
#include "surferView.h"
#include<iostream>
#include<fstream>
#include <QtSql>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>


using namespace std;
extern int consumerid;
extern int deliverid;

extern int predeliverid;
extern int preconsumerid;
extern  vector<deliver> deliverlist;
extern vector<consumer> consumerlist;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


}

Widget::~Widget()
{    delete ui;
}

void user::login(QString na,QString nb,int cc){


    name=na;password=nb;
    ID=cc;



}

void Widget::on_pushButton_menu_clicked()
{
    //surfer.new surferView();
    surfer.initial();

    surfer.show();
}

void Widget::on_pushButton_clicked()
{
    QString Username;
    QString Password;
    consumer a;

    Username = ui->name->text();
    Password = ui->password->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString("C:\\Users\\ramse\\Desktop\\CSC322\\Food-Delivery-System--master\\demodb.db"));

/*
    QSqlQuery QueryInsertData(db);
    QueryInsertData.prepare("INSERT INTO Employee (Username, Position, Password, Address, Phone, Email) VALUES(:Username, :Position, :Password, :Address, :Phone, :Email)");
    QueryInsertData.bindValue(":Username", na);
    QueryInsertData.bindValue(":Position", "Admin");
    QueryInsertData.bindValue(":Password", nb);
    QueryInsertData.bindValue(":Address", "123 street, apt 8K");
    QueryInsertData.bindValue(":Phone", 4444444444);
    QueryInsertData.bindValue(":Email", "Something@hotmail.com");
    QueryInsertData.exec();
*/
    db.open();
    QSqlDatabase::database().transaction();

    QSqlQuery qry;

    if(qry.exec("SELECT * FROM Customer WHERE Username = '" + Username + "' AND Password = '" + Password + "';")){
        int count = 0;

        while(qry.next()){
            count = count + 1;
        }
        if (count == 1) {
            QMessageBox::information(this, "Login", "Username and passwords are correct");
            consum.show();
        }
        else{
            QMessageBox::warning(this, "Login", "Username and passwords are not correct");
        }
    }



    QSqlDatabase::database().commit();
    db.close();

}


void Widget::on_pushButton_2_clicked()
{
    QString na;
    QString nb;

    int ks=0;
    int del=0;
    int del1=0;
    int mm=0;
    deliver a;
    na=ui->name->text();
    nb=ui->password->text();
    a.login(na,nb,deliverid);
    //QMessageBox::information(this,tr("hello"),na);
    for(ks=0;ks<deliverid;ks++){
          //QMessageBox::information(this,tr("hello"),a.name);
         // QMessageBox::information(this,tr("hello"),consumerlist[k].name);
        del=a.name.compare(deliverlist[ks].name);


        if(del==0){
                del1=a.password.compare(deliverlist[ks].password);
            if(del1==0){
            predeliverid=ks;break;
        }
            else{
                QMessageBox::information(this,tr("hello"),"Password is Wrong!");mm=1;           }
        }
}

    if(ks==deliverid&&mm==0){


    deliverlist.push_back(a);
    predeliverid=deliverid;
    deliverid++;
    ui->name->clear();
    ui->password->clear();
    deliver1.show();

}
    if(mm==1){ui->name->clear();
        ui->password->clear();}
    if(ks<deliverid&&mm==0){
        ui->name->clear();
        ui->password->clear();
        deliver1.show();
    }


}

void Widget::on_pushButton_3_clicked()
{
    SignUp info_wind;
    info_wind.setModal(true);
    info_wind.exec();
}

