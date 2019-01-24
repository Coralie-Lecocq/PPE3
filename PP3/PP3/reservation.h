#pragma once

#include <QWidget>
#include "ui_reservation.h"

class reservation : public QWidget
{
	Q_OBJECT

public:
	reservation(QWidget *parent = Q_NULLPTR);
	~reservation();

private:
	Ui::reservation ui;
};
