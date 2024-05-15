#include "dialog.h"
#include "UserCustomer.h"
#include "database.h"
#include "order.h"
#include "qsqlerror.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
     ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(this, &Dialog::finished, this, &Dialog::deleteOrdersForCustomer);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::deleteOrdersForCustomer()
{
    // Get instances of the data store and database link
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    // Create and configure the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", dbLink.connectionName());
    db.setDatabaseName(dbLink.databaseName());

    db.open();
    // Open the database
    if (!db.open()) {
        qDebug() << "Error: Failed to open database connection.";
        return;
    }

    // Prepare and execute the SQL query to delete orders for the customer
    int customerID = dataStore.getCustomerID();
    QSqlQuery query;
    query.prepare("DELETE FROM Orders WHERE CustomerID = :CustomerID AND Confirm = 'No'");
    query.bindValue(":CustomerID", customerID);

    if (query.exec()) {
        qDebug() << "Orders deleted successfully for CustomerID:" << customerID;
    } else {
        qDebug() << "Failed to delete orders for CustomerID:" << customerID << "Error:" << query.lastError().text();
    }

    // Close the database
    db.close();
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
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    // Open the database connection if not already opened
    if (!QSqlDatabase::contains(dbLink.connectionName())) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", dbLink.connectionName());
        db.setDatabaseName(dbLink.databaseName());
        db.open();
        if (!db.open()) {
            qDebug() << "Error: Failed to open database connection.";
            return;
        }
    }

    // Obtain the existing database connection
    QSqlDatabase db = QSqlDatabase::database(dbLink.connectionName());

    // Start a transaction
    if (!db.transaction()) {
        qDebug() << "Error: Failed to start database transaction.";
        return;
    }

    // Prepare and execute the SQL query to update confirmation status
    QSqlQuery updateQuery(db);
    updateQuery.prepare("UPDATE Orders SET Confirm = 'Yes' WHERE CustomerID = :customerID AND Confirm = 'No'");
    updateQuery.bindValue(":customerID", dataStore.getCustomerID());
    if (!updateQuery.exec()) {
        qDebug() << "Error executing SQL update query:" << updateQuery.lastError().text();
        db.rollback(); // Rollback the transaction in case of error
        return;
    }

    // Commit the transaction
    if (!db.commit()) {
        qDebug() << "Error committing database transaction.";
        return;
    }

    qDebug() << "Orders confirmed successfully!";
    if (!QSqlDatabase::contains(dbLink.connectionName())) {
        db.close();
    }

    this->close();
    order ord;
    ord.show();

}


void Dialog::on_pushButton_3_clicked()
{
    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    // Open the database connection if not already opened
    if (!QSqlDatabase::contains(dbLink.connectionName())) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", dbLink.connectionName());
        db.setDatabaseName(dbLink.databaseName());
        db.open();
        if (!db.open()) {
            qDebug() << "Error: Failed to open database connection.";
            return;
        }
    }

    // Obtain the existing database connection
    QSqlDatabase db = QSqlDatabase::database(dbLink.connectionName());

    // Start a transaction
    if (!db.transaction()) {
        qDebug() << "Error: Failed to start database transaction.";
        return;
    }

    // Prepare and execute the SQL query
    QSqlQuery query(db);
    query.prepare("SELECT * FROM Orders WHERE CustomerID = :customerID");
    query.bindValue(":customerID", dataStore.getCustomerID());
    if (!query.exec()) {
        qDebug() << "Error executing SQL query:" << query.lastError().text();
        db.rollback(); // Rollback the transaction in case of error
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

    query.prepare("SELECT SUM(Price) FROM Orders WHERE CustomerID = :customerID");
    query.bindValue(":customerID", dataStore.getCustomerID());
    if (!query.exec()) {
        qDebug() << "Error executing SQL query for sum of order prices:" << query.lastError().text();
        db.rollback(); // Rollback the transaction in case of error
        return;
    }

    // Fetch the result of the query
    if (query.next()) {
        double sum = query.value(0).toDouble();
        ui->textBrowser->setText(QString::number(sum));
    }

    // Commit the transaction
    if (!db.commit()) {
        qDebug() << "Error committing database transaction.";
        return;
    }

    if (!QSqlDatabase::contains(dbLink.connectionName())) {
        db.close();
    }

    // Commit the transaction
    db.commit();
}

