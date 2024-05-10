#include "customerCart.h"
#include "ui_customerCart.h"

consumerbill::consumerbill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consumerbill)
{
    ui->setupUi(this);
}

consumerbill::~consumerbill()
{
    delete ui;
}
