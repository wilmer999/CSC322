#include "dialog.h"
#include "UserCustomer.h"
#include "order.h"
#include "qsqlerror.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked() ///// Back
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    int customerID = dataStore.getCustomerID();
    QSqlQuery query;

    query.prepare("DELETE FROM Orders WHERE  CustomerID = :CustomerID AND Confirm = 'No'");
    query.bindValue(":CustomerID", customerID);

    if (query.exec()) {
        qDebug() << "Orders deleted successfully for CustomerID:" << customerID;
    } else {
        qDebug() << "Failed to delete orders for CustomerID:" << customerID << "Error:" << query.lastError().text();
    }

    this->close();
    order ordera;
    ordera.initial();
    ordera.show();



}


void Dialog::on_pushButton_clicked()  /// Confirm
{



    this->close();
    order ord;
    ord.show();

}

