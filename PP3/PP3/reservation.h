#pragma once

#include <QWidget>
#include "ui_reservation.h"

class Reservation : public QWidget
{
	Q_OBJECT

public:
	Reservation(QWidget *parent = Q_NULLPTR);
	~Reservation();

private:
	Ui::reservation ui;
};
