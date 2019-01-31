#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PP3.h"
#include "reservation.h"
#include "gestion_mat_view.h"
#include "Accueil.h"
#include "reservation.h"

class PP3 : public QMainWindow
{
	Q_OBJECT

public:
	PP3(QWidget *parent = Q_NULLPTR);

private:
	Ui::PP3Class ui;
	reservation* reservationview;
	gestion_mat_view* gestionview;
	Accueil* accueilview;

	void reservationSlot();

};
