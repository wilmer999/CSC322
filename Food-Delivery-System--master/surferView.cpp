#include "order.h"
#include "surferView.h"

#include "ui_surferView.h"
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
extern int surferid;
extern int presurferid;

extern vector<deliver> deliverlist;
extern vector<orders>  orderlist;




surferView::surferView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui:: surferView)
{
    ui->setupUi(this);
}

surferView::~surferView()
{
    delete ui;
}






void surferView::initial()
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


void surferView::on_pushButton_4_clicked()
{
    this->close();
}
