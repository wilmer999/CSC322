#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
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
