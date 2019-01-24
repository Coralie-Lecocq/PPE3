#pragma once

#include <QWidget>
#include "ui_Accueil.h"

class Accueil : public QWidget
{
	Q_OBJECT

public:
	Accueil(QWidget *parent = Q_NULLPTR);
	~Accueil();

private:
	Ui::Accueil ui;
};
