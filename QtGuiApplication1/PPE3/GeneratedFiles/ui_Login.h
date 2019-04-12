/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelPseudo;
    QLineEdit *lineEditPseudo;
    QLabel *labelMDP;
    QLineEdit *lineEditMDP;
    QPushButton *pushButtonLogin;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1093, 772);
        QFont font;
        font.setPointSize(15);
        Login->setFont(font);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 110, 591, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelPseudo = new QLabel(layoutWidget);
        labelPseudo->setObjectName(QString::fromUtf8("labelPseudo"));
        labelPseudo->setMaximumSize(QSize(16777215, 50));
        labelPseudo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelPseudo);

        lineEditPseudo = new QLineEdit(layoutWidget);
        lineEditPseudo->setObjectName(QString::fromUtf8("lineEditPseudo"));

        verticalLayout->addWidget(lineEditPseudo);

        labelMDP = new QLabel(layoutWidget);
        labelMDP->setObjectName(QString::fromUtf8("labelMDP"));
        labelMDP->setMaximumSize(QSize(16777215, 50));
        labelMDP->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelMDP);

        lineEditMDP = new QLineEdit(layoutWidget);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));

        verticalLayout->addWidget(lineEditMDP);

        pushButtonLogin = new QPushButton(layoutWidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        QFont font1;
        font1.setPointSize(10);
        pushButtonLogin->setFont(font1);

        verticalLayout->addWidget(pushButtonLogin);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        labelPseudo->setText(QApplication::translate("Login", "Email", nullptr));
        labelMDP->setText(QApplication::translate("Login", "Mot De Passe", nullptr));
        pushButtonLogin->setText(QApplication::translate("Login", "Valid\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
