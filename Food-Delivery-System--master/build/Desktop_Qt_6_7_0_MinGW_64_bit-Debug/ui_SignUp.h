/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLineEdit *Email;
    QLineEdit *Confirm;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *phone;
    QPushButton *pushButton;
    QLineEdit *Address;
    QLabel *label_6;
    QLineEdit *username;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(405, 300);
        Email = new QLineEdit(SignUp);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(130, 170, 181, 21));
        Email->setInputMethodHints(Qt::ImhEmailCharactersOnly);
        Confirm = new QLineEdit(SignUp);
        Confirm->setObjectName("Confirm");
        Confirm->setGeometry(QRect(130, 80, 181, 24));
        label_4 = new QLabel(SignUp);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 110, 49, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 61, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        password = new QLineEdit(SignUp);
        password->setObjectName("password");
        password->setGeometry(QRect(130, 50, 181, 24));
        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 50, 71, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 80, 121, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(SignUp);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 140, 51, 21));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        phone = new QLineEdit(SignUp);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(130, 140, 181, 21));
        phone->setInputMethodHints(Qt::ImhDigitsOnly);
        phone->setMaxLength(10);
        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 260, 80, 24));
        Address = new QLineEdit(SignUp);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(130, 110, 181, 24));
        label_6 = new QLabel(SignUp);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 170, 49, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        username = new QLineEdit(SignUp);
        username->setObjectName("username");
        username->setGeometry(QRect(130, 20, 181, 24));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Address:", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Confirm Password:", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Phone:", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
