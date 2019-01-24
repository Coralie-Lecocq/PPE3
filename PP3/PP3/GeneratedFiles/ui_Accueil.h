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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *GestionMat;
    QToolButton *reservation;
    QToolButton *facturation;
    QToolButton *deconnexion;

    void setupUi(QWidget *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QString::fromUtf8("Accueil"));
        Accueil->resize(1087, 742);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Accueil->sizePolicy().hasHeightForWidth());
        Accueil->setSizePolicy(sizePolicy);
        Accueil->setStyleSheet(QString::fromUtf8("QToolButton {backgroud-color:red;}"));
        horizontalLayout_2 = new QHBoxLayout(Accueil);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        GestionMat = new QToolButton(Accueil);
        GestionMat->setObjectName(QString::fromUtf8("GestionMat"));
        sizePolicy.setHeightForWidth(GestionMat->sizePolicy().hasHeightForWidth());
        GestionMat->setSizePolicy(sizePolicy);
        GestionMat->setMinimumSize(QSize(160, 130));
        GestionMat->setMaximumSize(QSize(160, 130));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 213, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 191, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        GestionMat->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PP3/resources/icons8-gestion-de-projet-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        GestionMat->setIcon(icon);
        GestionMat->setIconSize(QSize(100, 100));
        GestionMat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(GestionMat);

        reservation = new QToolButton(Accueil);
        reservation->setObjectName(QString::fromUtf8("reservation"));
        sizePolicy.setHeightForWidth(reservation->sizePolicy().hasHeightForWidth());
        reservation->setSizePolicy(sizePolicy);
        reservation->setMinimumSize(QSize(160, 130));
        reservation->setMaximumSize(QSize(160, 130));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/PP3/resources/reservation.png"), QSize(), QIcon::Normal, QIcon::Off);
        reservation->setIcon(icon1);
        reservation->setIconSize(QSize(100, 100));
        reservation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(reservation);

        facturation = new QToolButton(Accueil);
        facturation->setObjectName(QString::fromUtf8("facturation"));
        sizePolicy.setHeightForWidth(facturation->sizePolicy().hasHeightForWidth());
        facturation->setSizePolicy(sizePolicy);
        facturation->setMinimumSize(QSize(160, 130));
        facturation->setMaximumSize(QSize(160, 130));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PP3/resources/icons8-facture-d'achat-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        facturation->setIcon(icon2);
        facturation->setIconSize(QSize(100, 100));
        facturation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(facturation);

        deconnexion = new QToolButton(Accueil);
        deconnexion->setObjectName(QString::fromUtf8("deconnexion"));
        sizePolicy.setHeightForWidth(deconnexion->sizePolicy().hasHeightForWidth());
        deconnexion->setSizePolicy(sizePolicy);
        deconnexion->setMinimumSize(QSize(160, 130));
        deconnexion->setMaximumSize(QSize(160, 130));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PP3/resources/icons8-effacer-filled-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        deconnexion->setIcon(icon3);
        deconnexion->setIconSize(QSize(100, 100));
        deconnexion->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(deconnexion);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Accueil", nullptr));
        GestionMat->setText(QApplication::translate("Accueil", "Gestion Materiel", nullptr));
        reservation->setText(QApplication::translate("Accueil", "Reservation", nullptr));
        facturation->setText(QApplication::translate("Accueil", "Facturation", nullptr));
        deconnexion->setText(QApplication::translate("Accueil", "Deconnexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
