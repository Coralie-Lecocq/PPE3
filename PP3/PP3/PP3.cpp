#include "PP3.h"

PP3::PP3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	accueilview = new Accueil();
	ui.tabWidget->clear();
	ui.tabWidget->addTab(accueilview, "Accueil");
}
