#include "signup.h"
#include "UserCustomer.h"
#include "database.h"
#include "ui_signup.h"

#include <QtSql>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>
#include <QString>
#include <QLineEdit>


SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{

    QString Username = ui->username->text();
    QString Password = ui->password->text();
    QString ConfirmPass = ui->Confirm->text();
    QString Address = ui->Address->text();
    int Phone = ui->phone->text().toInt();
    QString Email = ui->Email->text();

    if (Password.length() <= 8) {
        QMessageBox::warning(this, "Login", "Password must be greater than 8 characters");
        return;
    }

    CustomerDataStore& dataStore = CustomerDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    QSqlDatabase db = QSqlDatabase::addDatabase(dbLink.connectionName());
    db.setDatabaseName(QString(dbLink.databaseName()));

    if (!db.open()) {
        qDebug() << "Error: Failed to open database";
        return;
    }

    QSqlDatabase::database().transaction();

    QSqlQuery qry(db);
    qry.prepare("SELECT COUNT(*) FROM Customer WHERE Username = :Username");
    qry.bindValue(":Username", Username);
    if (!qry.exec()) {
        qDebug() << "Error in SELECT query:" << qry.lastError().text();
        QSqlDatabase::database().rollback();
        return;
    }

    qry.next();
    int count = qry.value(0).toInt();
    if (count > 0) {
        QMessageBox::information(this, "Login", "Username is already in use");
        QSqlDatabase::database().rollback();
        return;
    }

    if (Password != ConfirmPass) {
        QMessageBox::warning(this, "Login", "Password and Confirm Password are not the same");
        QSqlDatabase::database().rollback();
        return;
    }

    qry.prepare("INSERT INTO Customer(Username, Password, Address, Phone, Email, VIP) VALUES(:Username, :Password, :Address, :Phone, :Email, :VIP)");
    qry.bindValue(":Username", Username);
    qry.bindValue(":Password", Password);
    qry.bindValue(":Address", Address);
    qry.bindValue(":Phone", Phone);
    qry.bindValue(":Email", Email);
    qry.bindValue(":VIP", "No");
    if (!qry.exec()) {
        qDebug() << "Error in INSERT query:" << qry.lastError().text();
        QSqlDatabase::database().rollback();
        return;
    }

    QSqlDatabase::database().commit();
    this->hide();

}

