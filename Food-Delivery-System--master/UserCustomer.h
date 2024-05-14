#ifndef USERCUSTOMER_H
#define USERCUSTOMER_H
#include <QString>
#include <QSqlQuery>


#include <QString>
#include <QString>

class CustomerDataStore {
public:
    static CustomerDataStore& getInstance() {
        static CustomerDataStore instance;
        return instance;
    }

    int getCustomerIDFromDB(const QString& username, const QString& password) {
        QSqlQuery query;
        query.prepare("SELECT CustomerID FROM Customer WHERE Username = :username AND Password = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if (query.exec() && query.next()) {
            return query.value(0).toInt();
        } else {
            qDebug() << "Failed to retrieve CustomerID from the database.";
            return -1;
        }
    }

    int getCustomerID() const {
        return customerID;
    }

    void setCustomerID(int id) {
        customerID = id;
    }

    QString getUsername() const {
        return username;
    }

    void setUsername(const QString& name) {
        username = name;
    }

    QString getPassword() const {
        return password;
    }

    void setPassword(const QString& pass) {
        password = pass;
    }

private:
    CustomerDataStore() {} // Private constructor to enforce singleton
    CustomerDataStore(const CustomerDataStore&) = delete; // Disallow copy construction
    CustomerDataStore& operator=(const CustomerDataStore&) = delete; // Disallow assignment
    ~CustomerDataStore() {} // Destructor

    int customerID = -1;
    QString username;
    QString password;
};

#endif // USERCUSTOMER_H
