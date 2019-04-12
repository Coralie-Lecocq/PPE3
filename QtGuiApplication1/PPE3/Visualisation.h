#pragma once

#include <QWidget>
#include "ui_Visualisation.h"

class Visualisation : public QWidget
{
	Q_OBJECT

public:
	Visualisation(QWidget *parent = Q_NULLPTR);
	~Visualisation();

private:
	Ui::Visualisation ui;
};
