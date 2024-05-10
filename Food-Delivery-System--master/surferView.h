#ifndef SURFERVIEW_H
#define SURFERVIEW_H
#include <QWidget>

namespace Ui {
class surferView;
}

class surferView : public QWidget
{
    Q_OBJECT
    
public:
    explicit surferView(QWidget *parent = 0);
    ~surferView();
    void initial();

private slots:

    void on_pushButton_4_clicked();

private:
    Ui::surferView *ui;


};

#endif // SURFERVIEW_H
