/********************************************************************************
** Form generated from reading UI file 'Visualisation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATION_H
#define UI_VISUALISATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Visualisation
{
public:
    QListView *Visualisationlist;

    void setupUi(QWidget *Visualisation)
    {
        if (Visualisation->objectName().isEmpty())
            Visualisation->setObjectName(QString::fromUtf8("Visualisation"));
        Visualisation->resize(1115, 653);
        Visualisationlist = new QListView(Visualisation);
        Visualisationlist->setObjectName(QString::fromUtf8("Visualisationlist"));
        Visualisationlist->setGeometry(QRect(80, 30, 931, 591));

        retranslateUi(Visualisation);

        QMetaObject::connectSlotsByName(Visualisation);
    } // setupUi

    void retranslateUi(QWidget *Visualisation)
    {
        Visualisation->setWindowTitle(QApplication::translate("Visualisation", "Visualisation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Visualisation: public Ui_Visualisation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATION_H
