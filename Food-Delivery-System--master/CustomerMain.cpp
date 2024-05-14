#include "CustomerMain.h"
#include "UserCustomer.h"
#include "custcart.h"
#include "ui_CustomerMain.h"
#include "Login.h"
#include"order.h"


consumermainpage::consumermainpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consumermainpage)
{
    ui->setupUi(this);




}

consumermainpage::~consumermainpage()
{
    delete ui;
}

void consumermainpage::on_pushButton_clicked()
{
    CustCart check;
    check.setModal(true);
    check.exec();


}

void consumermainpage::on_pushButton_2_clicked()
{

    CustomerDataStore& dataStore = CustomerDataStore::getInstance();

    qDebug() << "CustomerID:" << dataStore.getCustomerID();
    qDebug() << "Username:" << dataStore.getUsername();
    qDebug() << "Password:" << dataStore.getPassword();

    ordera=new order;
    ordera->initial();
    ordera->show();


}

void consumermainpage::on_pushButton_4_clicked()
{
    this->close();
    Widget ww;
    ww.show();
}
