#include "PP3.h"

PP3::PP3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.tabWidget->clear();

	this->gestionview = new gestion_mat_view();
	ui.tabWidget->addTab(gestionview, "gestion mat");
	accueilview = new Accueil();
	ui.tabWidget->addTab(accueilview, "Accueil");

}
