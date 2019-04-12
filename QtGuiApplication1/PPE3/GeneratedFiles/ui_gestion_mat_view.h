/********************************************************************************
** Form generated from reading UI file 'gestion_mat_view.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MAT_VIEW_H
#define UI_GESTION_MAT_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_mat_view
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QWidget *gestion_mat_view)
    {
        if (gestion_mat_view->objectName().isEmpty())
            gestion_mat_view->setObjectName(QString::fromUtf8("gestion_mat_view"));
        gestion_mat_view->resize(865, 236);
        verticalLayout_7 = new QVBoxLayout(gestion_mat_view);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(gestion_mat_view);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        label_3 = new QLabel(gestion_mat_view);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        comboBox_2 = new QComboBox(gestion_mat_view);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(300, 30));
        comboBox_2->setMaximumSize(QSize(300, 30));

        verticalLayout_5->addWidget(comboBox_2);

        comboBox = new QComboBox(gestion_mat_view);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(300, 30));
        comboBox->setMaximumSize(QSize(300, 30));

        verticalLayout_5->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_2 = new QPushButton(gestion_mat_view);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setMaximumSize(QSize(100, 30));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(gestion_mat_view);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 30));
        pushButton_3->setMaximumSize(QSize(100, 30));

        verticalLayout_4->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        lineEdit = new QLineEdit(gestion_mat_view);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(200, 30));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(gestion_mat_view);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(200, 30));

        verticalLayout_3->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(gestion_mat_view);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(gestion_mat_view);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMinimumSize(QSize(100, 30));
        pushButton_4->setMaximumSize(QSize(100, 30));

        verticalLayout_2->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout);


        retranslateUi(gestion_mat_view);

        QMetaObject::connectSlotsByName(gestion_mat_view);
    } // setupUi

    void retranslateUi(QWidget *gestion_mat_view)
    {
        gestion_mat_view->setWindowTitle(QApplication::translate("gestion_mat_view", "gestion_mat_view", nullptr));
        label_2->setText(QApplication::translate("gestion_mat_view", "Consommables :", nullptr));
        label_3->setText(QApplication::translate("gestion_mat_view", "Bornes :", nullptr));
        pushButton_2->setText(QApplication::translate("gestion_mat_view", "-", nullptr));
        pushButton_3->setText(QApplication::translate("gestion_mat_view", "-", nullptr));
        pushButton->setText(QApplication::translate("gestion_mat_view", "+", nullptr));
        pushButton_4->setText(QApplication::translate("gestion_mat_view", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_mat_view: public Ui_gestion_mat_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MAT_VIEW_H
