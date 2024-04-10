#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_input1_cursorPositionChanged(int arg1, int arg2)
{

}

int firstNum, secondNum, result;

void MainWindow::on_pushButton_clicked(){

    firstNum = ui->input1->text().toInt();
    secondNum = ui->input2->text().toInt();
    result = firstNum + secondNum;

    ui->output->setText(QString::number(result));

}


void MainWindow::on_next_clicked()
{
    this->hide();
    Info_window info_wind;
    info_wind.setModal(true);
    info_wind.exec();
}

