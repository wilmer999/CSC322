#ifndef DATASTRUCT_H
#define DATASTRUCT_H
#include <vector>
#include "stdio.h"
#include "QFile"
#include "QDebug"
#include "iostream"
#include "fstream"

// User data structure
using namespace std;
class user
{
public:
    QString name;
    int ID;
    QString image;//user image
    QString password;

    user();
    void login(QString a,QString b,int cc);
    void logoff();
};


class consumer:public user
{
public:
    double money;   //user balance
    int phonenumber;

    vector<int> order;// user order

    consumer();
    void shoppingselect(); //select food items
    void shoppingbag();//shopping cart
    void shoppingnumber();// cart item number
    void pay(); //payment
    void creatorder();//create menu
    void copyconsumer(consumer &a,consumer&b);
 };


class deliver:public user
{
public:
    int grade;   //rating
    vector<int> patchorder; //order ID
    vector<int> finishorder;


public:
    deliver();
    void checktask();//finished orders
    void checkwork();//all finished orders
    void taskreport();//check finished order
 };



// definitions
class food
{
public:
    QString name;  //food name
    QString image;
    int ID; //food ID
    double money; //Food Price

    food();
    void food1(QString a,QString b,int i,double m);
};



class orders
{
public:
    int          ID; //order ID
    int          status;// order: 0 is unfinished, 1 is finished
    int          usability; //check balance for availability
    double       totalprice;
    vector<QString>orderfood;  //ordered food
    vector<double>ordernumber;   //ordered food item number
    QString      consumer;
    int          many;    //# of food
    QString      phone;
    QString      detail;     //details

    orders();
    void iddispatch();
};

//









#endif // DATASTRUCT_H
