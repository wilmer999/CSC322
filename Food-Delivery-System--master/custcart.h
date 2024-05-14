#ifndef CUSTCART_H
#define CUSTCART_H

#include <QDialog>

namespace Ui {
class CustCart;
}

class CustCart : public QDialog
{
    Q_OBJECT

public:
    explicit CustCart(QWidget *parent = nullptr);
    ~CustCart();

private:
    Ui::CustCart *ui;
};

#endif // CUSTCART_H
