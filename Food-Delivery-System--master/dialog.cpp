#include "dialog.h"
#include "UserCustomer.h"
#include "database.h"
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
    DatabaseLink& dbLink = DatabaseLink::instance();

    QSqlDatabase db = QSqlDatabase::addDatabase(dbLink.connectionName());
    db.setDatabaseName(QString(dbLink.databaseName()));

    int customerID = dataStore.getCustomerID();
    QSqlQuery query;

    db.open();

    query.prepare("DELETE FROM Orders WHERE  CustomerID = :CustomerID AND Confirm = 'No'");
    query.bindValue(":CustomerID", customerID);

    if (query.exec()) {
        qDebug() << "Orders deleted successfully for CustomerID:" << customerID;
    } else {
        qDebug() << "Failed to delete orders for CustomerID:" << customerID << "Error:" << query.lastError().text();
    }


    db.close();
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


void Dialog::on_pushButton_3_clicked()
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    QSqlDatabase db = QSqlDatabase::addDatabase(dbLink.connectionName());
    db.setDatabaseName(QString(dbLink.databaseName()));

    db.open();

    if (!db.open()) {
        qDebug() << "Error: Failed to open database connection.";
        return;
    }

    // Start a transaction
    if (!db.transaction()) {
        qDebug() << "Error: Failed to start database transaction.";
        db.close();
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT MenuName, Price, Confirm FROM Orders WHERE CustomerID = :customerID");
    query.bindValue(":customerID", dataStore.getCustomerID());

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Error executing SQL query:" << query.lastError().text();
        db.rollback(); // Rollback the transaction in case of error
        db.close();
        return;
    }

    // Populate the table widget with query results
    ui->tableWidget->setRowCount(query.size());
    int rowNumber = 0;
    while (query.next()) {
        ui->tableWidget->setItem(rowNumber, 0, new QTableWidgetItem(query.value("MenuName").toString()));
        ui->tableWidget->setItem(rowNumber, 1, new QTableWidgetItem(query.value("Price").toString()));
        ui->tableWidget->setItem(rowNumber, 2, new QTableWidgetItem(query.value("Confirm").toString()));
        ++rowNumber;
    }

    db.commit();
    db.close();
}

