#ifndef CUSTOMERORDERCHECK_H
#define CUSTOMERORDERCHECK_H

#include <QWidget>

namespace Ui {
class consumercheck;
}

class consumercheck : public QWidget
{
    Q_OBJECT
    
public:
    explicit consumercheck(QWidget *parent = 0);
    ~consumercheck();
    void showorder();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::consumercheck *ui;
};

#endif // CUSTOMERORDERCHECK_H
