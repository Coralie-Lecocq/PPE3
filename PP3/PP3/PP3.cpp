#include "PP3.h"

PP3::PP3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	reservationview = new reservation();
	ui.tabWidget->clear();
	ui.tabWidget->addTab(reservationview, "Reserver une borne");

}
