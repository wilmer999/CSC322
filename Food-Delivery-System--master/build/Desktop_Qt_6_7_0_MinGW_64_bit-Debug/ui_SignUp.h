/********************************************************************************
** Form generated from reading UI file 'SignUp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *Confirm;
    QLineEdit *Address;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *phone;
    QLabel *label_5;
    QLineEdit *Email;
    QLabel *label_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(394, 307);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 270, 80, 24));
        username = new QLineEdit(Form);
        username->setObjectName("username");
        username->setGeometry(QRect(120, 30, 181, 24));
        password = new QLineEdit(Form);
        password->setObjectName("password");
        password->setGeometry(QRect(120, 60, 181, 24));
        Confirm = new QLineEdit(Form);
        Confirm->setObjectName("Confirm");
        Confirm->setGeometry(QRect(120, 90, 181, 24));
        Address = new QLineEdit(Form);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(120, 120, 181, 24));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 61, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 71, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, 90, 121, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 120, 49, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        phone = new QLineEdit(Form);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(120, 150, 181, 24));
        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 150, 51, 21));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Email = new QLineEdit(Form);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(120, 180, 181, 24));
        label_6 = new QLabel(Form);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 180, 49, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "SignUp", nullptr));
        label->setText(QCoreApplication::translate("Form", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Confirm Password:", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Address:", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Phone:", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
