#include "PP3.h"

PP3::PP3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->gestionview = new gestion_mat_view();
	ui.tabWidget->clear();
	ui.tabWidget->addTab(gestionview, "gestion mat");
	accueilview = new Accueil();
	ui.tabWidget->clear();
	ui.tabWidget->addTab(accueilview, "Accueil");

}
