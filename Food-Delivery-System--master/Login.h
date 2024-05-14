#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "UserCustomer.h"
#include "database.h"
#include "qapplication.h"
#include "vector"
#include "stdio.h"
#include <QMessageBox>
#include "CustomerMain.h"
#include "delivermainpage.h"
#include "surferView.h"
#include <QtSql>
#include <QSqlDatabase>

#include <QCloseEvent>
#include <QMainWindow>
#include <QApplication>
#include <QDebug>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void closeEvent(QCloseEvent *event) override {
        // Close all other windows
        closeAllWindowsExceptThis();
        // Accept the close event to allow this window to close
        event->accept();
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_menu_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    consumermainpage consum;
    delivermainpage  deliver1;
    surferView surfer;

    void closeAllWindowsExceptThis() {
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

        // Get all top-level windows
        QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
        for (QWidget* widget : topLevelWidgets) {
            // Close the window if it's not the current window
            if (widget != this) {
                widget->close();
            }
        }
    }


};

#endif // LOGIN_H
