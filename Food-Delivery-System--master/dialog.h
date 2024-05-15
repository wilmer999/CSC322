#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCloseEvent>
#include <QMainWindow>
#include <QSqlQuery>
#include <QDebug>
#include "UserCustomer.h"
#include "qsqlerror.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

protected:
    void closeEvent(QCloseEvent *event) override {
        CustomerDataStore& dataStore = CustomerDataStore::getInstance();
        // Get the customerID associated with this window (assuming it's stored somewhere)
        int customerID = dataStore.getCustomerID(); // Implement this function to get the customerID

        // Delete orders associated with the customerID
        deleteOrdersByCustomerID(customerID);

        // Accept the close event to allow the window to close
        event->accept();
    }
private slots:
    void deleteOrdersForCustomer();


private:
    void deleteOrdersByCustomerID(int customerID) {
        // Prepare the SQL query to delete orders for the specified customerID
        QSqlQuery query;
        query.prepare("DELETE FROM Orders WHERE CustomerID = :customerID AND Confirm = 'No'");
        query.bindValue(":customerID", customerID);

        // Execute the query
        if (query.exec()) {
            qDebug() << "Orders deleted successfully for CustomerID:" << customerID;
        } else {
            qDebug() << "Failed to delete orders for CustomerID:" << customerID << "Error:" << query.lastError().text();
        }
    }

    Ui::Dialog *ui;
};

#endif // DIALOG_H
