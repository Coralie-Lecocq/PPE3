/********************************************************************************
** Form generated from reading UI file 'PP3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PP3_H
#define UI_PP3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PP3Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PP3Class)
    {
        if (PP3Class->objectName().isEmpty())
            PP3Class->setObjectName(QString::fromUtf8("PP3Class"));
        PP3Class->resize(881, 759);
        centralWidget = new QWidget(PP3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        PP3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PP3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 21));
        PP3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PP3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PP3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PP3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PP3Class->setStatusBar(statusBar);

        retranslateUi(PP3Class);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PP3Class);
    } // setupUi

    void retranslateUi(QMainWindow *PP3Class)
    {
        PP3Class->setWindowTitle(QApplication::translate("PP3Class", "PP3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PP3Class", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PP3Class", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PP3Class: public Ui_PP3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PP3_H
