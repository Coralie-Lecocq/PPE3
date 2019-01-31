/********************************************************************************
** Form generated from reading UI file 'Accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *facturation;
    QToolButton *GestionMat;
    QToolButton *reservation;
    QToolButton *visualisation;
    QToolButton *deconnexion;

    void setupUi(QWidget *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QString::fromUtf8("Accueil"));
        Accueil->resize(1087, 729);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Accueil->sizePolicy().hasHeightForWidth());
        Accueil->setSizePolicy(sizePolicy);
        Accueil->setStyleSheet(QString::fromUtf8("QToolButton {backgroud-color:red;}"));
        verticalLayout = new QVBoxLayout(Accueil);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        facturation = new QToolButton(Accueil);
        facturation->setObjectName(QString::fromUtf8("facturation"));
        sizePolicy.setHeightForWidth(facturation->sizePolicy().hasHeightForWidth());
        facturation->setSizePolicy(sizePolicy);
        facturation->setMinimumSize(QSize(160, 130));
        facturation->setMaximumSize(QSize(160, 130));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PP3/resources/icons8-facture-d'achat-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        facturation->setIcon(icon);
        facturation->setIconSize(QSize(100, 100));
        facturation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(facturation);

        GestionMat = new QToolButton(Accueil);
        GestionMat->setObjectName(QString::fromUtf8("GestionMat"));
        sizePolicy.setHeightForWidth(GestionMat->sizePolicy().hasHeightForWidth());
        GestionMat->setSizePolicy(sizePolicy);
        GestionMat->setMinimumSize(QSize(160, 130));
        GestionMat->setMaximumSize(QSize(160, 130));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/PP3/resources/icons8-gestion-de-projet-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        GestionMat->setIcon(icon1);
        GestionMat->setIconSize(QSize(100, 100));
        GestionMat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(GestionMat);

        reservation = new QToolButton(Accueil);
        reservation->setObjectName(QString::fromUtf8("reservation"));
        sizePolicy.setHeightForWidth(reservation->sizePolicy().hasHeightForWidth());
        reservation->setSizePolicy(sizePolicy);
        reservation->setMinimumSize(QSize(160, 130));
        reservation->setMaximumSize(QSize(160, 130));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PP3/resources/reservation.png"), QSize(), QIcon::Normal, QIcon::Off);
        reservation->setIcon(icon2);
        reservation->setIconSize(QSize(100, 100));
        reservation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(reservation);

        visualisation = new QToolButton(Accueil);
        visualisation->setObjectName(QString::fromUtf8("visualisation"));
        sizePolicy.setHeightForWidth(visualisation->sizePolicy().hasHeightForWidth());
        visualisation->setSizePolicy(sizePolicy);
        visualisation->setMinimumSize(QSize(160, 130));
        visualisation->setMaximumSize(QSize(160, 130));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PP3/resources/icons8-visible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        visualisation->setIcon(icon3);
        visualisation->setIconSize(QSize(100, 100));
        visualisation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(visualisation);

        deconnexion = new QToolButton(Accueil);
        deconnexion->setObjectName(QString::fromUtf8("deconnexion"));
        sizePolicy.setHeightForWidth(deconnexion->sizePolicy().hasHeightForWidth());
        deconnexion->setSizePolicy(sizePolicy);
        deconnexion->setMinimumSize(QSize(160, 130));
        deconnexion->setMaximumSize(QSize(160, 130));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/PP3/resources/icons8-effacer-filled-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        deconnexion->setIcon(icon4);
        deconnexion->setIconSize(QSize(100, 100));
        deconnexion->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(deconnexion);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Accueil", nullptr));
        facturation->setText(QApplication::translate("Accueil", "Facturation", nullptr));
        GestionMat->setText(QApplication::translate("Accueil", "Gestion Materiel", nullptr));
        reservation->setText(QApplication::translate("Accueil", "Reservation", nullptr));
        visualisation->setText(QApplication::translate("Accueil", "Visualisation", nullptr));
        deconnexion->setText(QApplication::translate("Accueil", "Deconnexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
