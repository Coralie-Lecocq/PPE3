#include "PP3.h"
#include "ui_PP3.h"

PP3::PP3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
        
  ui.tabWidget->clear();
    
 	accueilview = new Accueil();
	ui.tabWidget->addTab(accueilview, "Accueil");
   
	reservationview = new Reservation();
  ui.tabWidget->addTab(reservationview, "Reserver une borne");

	gestionview = new Gestion_mat_view();
	ui.tabWidget->addTab(gestionview, "gestion mat");

	visualisationview = new Visualisation();
	ui.tabWidget->addTab(visualisationview, "Visualisation");

	//facturationview = new Facturation();
	//ui.tabWidget->addTab(facturationview, "facturation");

	//connect(accueilview, SIGNAL(ChangementPages()), SLOT(Nom slot()));
	connect(accueilview, &Accueil::ChangementPages, this, &PP3::reservationSlot);
	

}

void PP3::reservationSlot(int index) 
{
	ui.tabWidget->setCurrentIndex(index);
}
