#ifndef CUSTOMERCART_H
#define CUSTOMERCART_H

#include <QWidget>

namespace Ui {
class consumerbill;
}

class consumerbill : public QWidget
{
    Q_OBJECT
    
public:
    explicit consumerbill(QWidget *parent = 0);
    ~consumerbill();
    
private:
    Ui::consumerbill *ui;
};

#endif // CUSTOMERCART_H
