#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PP3.h"
#include "Accueil.h"

class PP3 : public QMainWindow
{
	Q_OBJECT

public:
	PP3(QWidget *parent = Q_NULLPTR);

private:
	Ui::PP3Class ui;
	Accueil* accueilview;

};
