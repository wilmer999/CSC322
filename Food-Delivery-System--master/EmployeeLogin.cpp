#include "EmployeeLogin.h"
#include "Employee.h"
#include "Database.h"
#include <QMessageBox>
#include <QSqlQuery>

EmployeeLogin::EmployeeLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeLogin)
{
    ui->setupUi(this);
}

EmployeeLogin::~EmployeeLogin()
{
    delete ui;
}

void EmployeeLogin::on_pushButton_clicked()
{
    QString Username = ui->name->text();
    QString Password = ui->password->text();

    EmployeeDataStore& dataStore = EmployeeDataStore::getInstance();
    DatabaseLink& dbLink = DatabaseLink::instance();

    QSqlDatabase db = QSqlDatabase::addDatabase(dbLink.connectionName());
    db.setDatabaseName(QString(dbLink.databaseName()));

    db.open();
    QSqlDatabase::database().transaction();

    QSqlQuery query;
    query.prepare("SELECT * FROM employees WHERE username = :username");
    query.bindValue(":username", Username);
    query.exec();

    if(query.next()) {
        QString storedPassword = query.value(1).toString(); 
        if(Password == storedPassword) {
           
        } else {
            
            QMessageBox::critical(this, "Login Failed", "Incorrect password");
        }
    } else {
      
        QMessageBox::critical(this, "Login Failed", "Username not found");
    }
}
