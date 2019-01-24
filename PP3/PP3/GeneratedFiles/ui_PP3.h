/********************************************************************************
** Form generated from reading UI file 'PP3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PP3_H
#define UI_PP3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PP3Class
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget1;
    QWidget *tab1;
    QWidget *tab_21;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PP3Class)
    {
        if (PP3Class->objectName().isEmpty())
            PP3Class->setObjectName(QStringLiteral("PP3Class"));
        PP3Class->resize(881, 759);
        centralWidget = new QWidget(PP3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(24, 19, 821, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget1 = new QTabWidget(centralWidget);
        tabWidget1->setObjectName(QStringLiteral("tabWidget1"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        tabWidget1->addTab(tab1, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        tabWidget1->addTab(tab_21, QString());

        horizontalLayout->addWidget(tabWidget1);

        PP3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PP3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 26));
        PP3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PP3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PP3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PP3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        tabWidget1->setTabText(tabWidget1->indexOf(tab1), QApplication::translate("PP3Class", "Tab 1", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_21), QApplication::translate("PP3Class", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PP3Class: public Ui_PP3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PP3_H
