#ifndef ORDER_H
#define ORDER_H
#include <QWidget>

namespace Ui {
class order;
}

class order : public QWidget
{
    Q_OBJECT
    
public:
    explicit order(QWidget *parent = 0);
    ~order();
    void initial();

private slots:
    //void on_pushButton_clicked();


    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::order *ui;

};

#endif // ORDER_H
