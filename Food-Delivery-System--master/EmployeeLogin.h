#ifndef EMPLOYEELOGIN_H
#define EMPLOYEELOGIN_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

#include "EmployeeDashboard.h"
namespace Ui {
class EmployeeLogin;
}

class EmployeeLogin : public QWidget
{
    Q_OBJECT
    
public:
    explicit EmployeeLogin(QWidget *parent = nullptr);
    ~EmployeeLogin();

protected:
    void closeEvent(QCloseEvent *event) override {
        
        closeAllWindowsExceptThis();
        
        event->accept();
    }

private slots:
    void on_pushButton_clicked();

private:
    Ui::EmployeeLogin *ui;
    EmployeeDashboard employeeDashboard; 

    void closeAllWindowsExceptThis() {
        
        QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
        for (QWidget* widget : topLevelWidgets) {
            
            if (widget != this) {
                widget->close();
            }
        }
    }
};

#endif 
