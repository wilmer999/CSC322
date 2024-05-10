#include "menu1.h"
#include "ui_menu1.h"
#include "datastruct.h"

#include <string>
#include <sstream>
using namespace std;
extern double allmoney;
extern food food11;
extern food food12;
extern food food13;
extern food food14;
extern food food21;
extern int consumerid;

extern int preconsumerid;

extern vector<consumer> consumerlist;
extern int menuid;
extern int premenuid;


extern vector<menu>  menulist;



menu1::menu1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu1()
{
    delete ui;
}




void menu::initial()
{



    QString dd;
    food11.food1("Hot Wings","",0,24);
    ui->food11->setText("Name："+food11.name);
    //ui->food11->append(food11.name);

    dd=QString::number(food11.money);
    //ui->food11->append(dd);
     ui->food11->append("Price："+dd);






    food12.food1("chickenlegs","",1,30);
    ui->food12->setText("Name：");
    ui->food12->append(food12.name);
    ui->food12->append("Price：");
    dd=QString::number(food12.money);
    ui->food12->append(dd);


    food13.food1("Gocups","",2,50);
    ui->food13->setText("Name：");
    ui->food13->append(food13.name);
    ui->food13->append("Price：");
    dd=QString::number(food13.money);
    ui->food13->append(dd);

    food14.food1("OriginalRecipe","",3,20);
    ui->food14->setText("Name：");
    ui->food14->append(food14.name);
    ui->food14->append("Price：");
    dd=QString::number(food14.money);
    ui->food14->append(dd);

    food21.food1("chickenlittes","",4,30);
    ui->food21->setText("Name：");
    ui->food21->append(food14.name);
    ui->food21->append("Price：");
    dd=QString::number(food14.money);
    ui->food21->append(dd);




}

void menu::on_pushButton_4_clicked()
{
    this->close();
}


