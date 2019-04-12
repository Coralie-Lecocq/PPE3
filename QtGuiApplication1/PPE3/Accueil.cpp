#include "Accueil.h"
#include "ui_Accueil.h"
#include "reservation.h"
#include "Visualisation.h"


Accueil::Accueil(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushbuttonreservation, &QAbstractButton::clicked, this, &Accueil::reservationSlot);
	connect(ui.pushbuttonGestionMat, &QAbstractButton::clicked, this, &Accueil::gestionmatSlot);
	connect(ui.pushbuttonfacturation, &QAbstractButton::clicked, this, &Accueil::facturationSlot);
	connect(ui.pushbuttonvisualisation, &QAbstractButton::clicked, this, &Accueil::visualisationSlot);

}

Accueil::~Accueil()
{

}


void Accueil::reservationSlot()
{

	emit ChangementPages(1);
}


void Accueil::gestionmatSlot()
{

	emit ChangementPages(3);

}

void Accueil::facturationSlot()
{

	emit ChangementPages(4);

}

void Accueil::visualisationSlot()
{

	emit ChangementPages(2);


}