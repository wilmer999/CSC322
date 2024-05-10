#include "order.h"
#include "ui_order.h"
#include "datastruct.h"

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
    QString i;
    double k;
    int sm=0;
    orders order1;

    i= ui->food11c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food11.name; //confirm food and order quantity
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }
    allmoney=k*food11.money;

    i=ui->food12c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food12.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }
    allmoney=allmoney+k*food12.money;
    i=ui->food13c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food13.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }


    allmoney=allmoney+k*food13.money;
    i=ui->food14c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food14.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }

    allmoney=allmoney+k*food14.money;

    i=ui->food15_c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food15.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }

    allmoney=allmoney+k*food15.money;

    i=ui->food16c->text();
    k=i.toDouble();
    if(k>0){
        order1.orderfood[sm]=food16.name;
        order1.ordernumber[sm]=k;
        order1.many++;
        sm++;
    }
    allmoney=allmoney+k*food16.money;

    i=QString::number(allmoney);
   // QMessageBox::information(this,tr("hello"),i);

    order1.consumer=consumerlist[preconsumerid].name;
    preorderid=orderid;
    order1.ID=preorderid;
    order1.phone= QString::number(consumerlist[preconsumerid].phonenumber);
    order1.status=0;
    order1.totalprice=allmoney;
    orderid++;
    orderlist.push_back(order1);

    this->close();


    m.showtotal();
    m.show();



}
