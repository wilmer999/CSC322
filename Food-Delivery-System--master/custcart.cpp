#include "custcart.h"
#include "ui_custcart.h"

CustCart::CustCart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CustCart)
{
    ui->setupUi(this);
}

CustCart::~CustCart()
{
    delete ui;
}
