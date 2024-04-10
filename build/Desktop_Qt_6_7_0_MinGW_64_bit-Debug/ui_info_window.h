/********************************************************************************
** Form generated from reading UI file 'info_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_WINDOW_H
#define UI_INFO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Info_window
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Info_window)
    {
        if (Info_window->objectName().isEmpty())
            Info_window->setObjectName("Info_window");
        Info_window->resize(400, 300);
        pushButton = new QPushButton(Info_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 270, 80, 24));

        retranslateUi(Info_window);

        QMetaObject::connectSlotsByName(Info_window);
    } // setupUi

    void retranslateUi(QDialog *Info_window)
    {
        Info_window->setWindowTitle(QCoreApplication::translate("Info_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Info_window", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info_window: public Ui_Info_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_WINDOW_H
