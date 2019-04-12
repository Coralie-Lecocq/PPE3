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
    QToolButton *pushbuttonvisualisation;
    QToolButton *pushbuttonreservation;
    QToolButton *pushbuttonGestionMat;
    QToolButton *pushbuttonfacturation;

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
        verticalLayout = new QVBoxLayout(Accueil);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushbuttonvisualisation = new QToolButton(Accueil);
        pushbuttonvisualisation->setObjectName(QString::fromUtf8("pushbuttonvisualisation"));
        sizePolicy.setHeightForWidth(pushbuttonvisualisation->sizePolicy().hasHeightForWidth());
        pushbuttonvisualisation->setSizePolicy(sizePolicy);
        pushbuttonvisualisation->setMinimumSize(QSize(160, 130));
        pushbuttonvisualisation->setMaximumSize(QSize(160, 130));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PPE3/resources/icons8-visible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbuttonvisualisation->setIcon(icon);
        pushbuttonvisualisation->setIconSize(QSize(100, 100));
        pushbuttonvisualisation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(pushbuttonvisualisation);

        pushbuttonreservation = new QToolButton(Accueil);
        pushbuttonreservation->setObjectName(QString::fromUtf8("pushbuttonreservation"));
        sizePolicy.setHeightForWidth(pushbuttonreservation->sizePolicy().hasHeightForWidth());
        pushbuttonreservation->setSizePolicy(sizePolicy);
        pushbuttonreservation->setMinimumSize(QSize(160, 130));
        pushbuttonreservation->setMaximumSize(QSize(160, 130));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/PPE3/resources/icons8-gestion-de-projet-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbuttonreservation->setIcon(icon1);
        pushbuttonreservation->setIconSize(QSize(100, 100));
        pushbuttonreservation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(pushbuttonreservation);

        pushbuttonGestionMat = new QToolButton(Accueil);
        pushbuttonGestionMat->setObjectName(QString::fromUtf8("pushbuttonGestionMat"));
        sizePolicy.setHeightForWidth(pushbuttonGestionMat->sizePolicy().hasHeightForWidth());
        pushbuttonGestionMat->setSizePolicy(sizePolicy);
        pushbuttonGestionMat->setMinimumSize(QSize(160, 130));
        pushbuttonGestionMat->setMaximumSize(QSize(160, 130));
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
        pushbuttonGestionMat->setPalette(palette);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PPE3/resources/icons8-facture-d'achat-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbuttonGestionMat->setIcon(icon2);
        pushbuttonGestionMat->setIconSize(QSize(100, 100));
        pushbuttonGestionMat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(pushbuttonGestionMat);

        pushbuttonfacturation = new QToolButton(Accueil);
        pushbuttonfacturation->setObjectName(QString::fromUtf8("pushbuttonfacturation"));
        sizePolicy.setHeightForWidth(pushbuttonfacturation->sizePolicy().hasHeightForWidth());
        pushbuttonfacturation->setSizePolicy(sizePolicy);
        pushbuttonfacturation->setMinimumSize(QSize(160, 130));
        pushbuttonfacturation->setMaximumSize(QSize(160, 130));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PPE3/resources/reservation.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbuttonfacturation->setIcon(icon3);
        pushbuttonfacturation->setIconSize(QSize(100, 100));
        pushbuttonfacturation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(pushbuttonfacturation);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Accueil", nullptr));
        pushbuttonvisualisation->setText(QApplication::translate("Accueil", "Visualisation", nullptr));
        pushbuttonreservation->setText(QApplication::translate("Accueil", "Reservation", nullptr));
        pushbuttonGestionMat->setText(QApplication::translate("Accueil", "Gestion Materiel", nullptr));
        pushbuttonfacturation->setText(QApplication::translate("Accueil", "Facturation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
