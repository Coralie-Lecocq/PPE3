#pragma once

#include <QWidget>
#include "ui_Accueil.h"


class Accueil : public QWidget
{
	Q_OBJECT


public:
	Accueil(QWidget *parent = Q_NULLPTR);
	~Accueil();
	void reservationSlot();
	void gestionmatSlot();
	void facturationSlot();
	void visualisationSlot();

signals:
	void ChangementPages(int);


private:
	Ui::Accueil ui;
};
