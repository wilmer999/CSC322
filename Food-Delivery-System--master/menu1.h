#ifndef MENU1_H
#define MENU1_H
#include "paybill.h"
#include <QWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT
    
public:
    explicit menu(QWidget *parent = 0);
    ~menu();
    void initial();

private slots:
    void on_pushButton_clicked();


    // void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::menu *ui;
    paybill m;

};

#endif // MENU1_H
