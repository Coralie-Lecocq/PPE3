#pragma once

#include <QWidget>

class Facturation : public QObject
{
	Q_OBJECT

public:
	
	Facturation(QObject *parent);
	~Facturation();
private:

	Ui::Facturation ui;
};
