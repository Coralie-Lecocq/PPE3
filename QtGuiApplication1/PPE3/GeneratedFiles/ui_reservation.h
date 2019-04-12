/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reservation
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *NomClient;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *Borne;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *DateDebut;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *DateFin;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *ValidResa;

    void setupUi(QWidget *reservation)
    {
        if (reservation->objectName().isEmpty())
            reservation->setObjectName(QString::fromUtf8("reservation"));
        reservation->resize(764, 708);
        verticalLayout_4 = new QVBoxLayout(reservation);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(reservation);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        NomClient = new QLineEdit(reservation);
        NomClient->setObjectName(QString::fromUtf8("NomClient"));

        horizontalLayout_4->addWidget(NomClient);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(reservation);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit = new QLineEdit(reservation);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(reservation);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Borne = new QComboBox(reservation);
        Borne->addItem(QString());
        Borne->addItem(QString());
        Borne->addItem(QString());
        Borne->setObjectName(QString::fromUtf8("Borne"));

        horizontalLayout_3->addWidget(Borne);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(reservation);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        DateDebut = new QDateEdit(reservation);
        DateDebut->setObjectName(QString::fromUtf8("DateDebut"));

        horizontalLayout->addWidget(DateDebut);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(reservation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        DateFin = new QDateEdit(reservation);
        DateFin->setObjectName(QString::fromUtf8("DateFin"));

        horizontalLayout_2->addWidget(DateFin);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        ValidResa = new QPushButton(reservation);
        ValidResa->setObjectName(QString::fromUtf8("ValidResa"));
        ValidResa->setMinimumSize(QSize(150, 150));
        ValidResa->setSizeIncrement(QSize(150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PP3/resources/icons8-approval-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        ValidResa->setIcon(icon);
        ValidResa->setIconSize(QSize(150, 150));

        horizontalLayout_6->addWidget(ValidResa);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(reservation);

        QMetaObject::connectSlotsByName(reservation);
    } // setupUi

    void retranslateUi(QWidget *reservation)
    {
        reservation->setWindowTitle(QApplication::translate("reservation", "reservation", nullptr));
        label_5->setText(QApplication::translate("reservation", "TextLabel:", nullptr));
        label_4->setText(QApplication::translate("reservation", "Nom client :", nullptr));
        label_3->setText(QApplication::translate("reservation", "Borne : ", nullptr));
        Borne->setItemText(0, QApplication::translate("reservation", "Borne 1", nullptr));
        Borne->setItemText(1, QApplication::translate("reservation", "Borne 2", nullptr));
        Borne->setItemText(2, QApplication::translate("reservation", "Borne 3", nullptr));

        label->setText(QApplication::translate("reservation", "D\303\251but de r\303\251servation  :", nullptr));
        label_2->setText(QApplication::translate("reservation", "Fin de r\303\251servation       : ", nullptr));
        ValidResa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reservation: public Ui_reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
