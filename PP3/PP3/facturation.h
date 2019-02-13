#pragma once

#include <QWidget>
#include "ui_facturation.h"
class facturation : public QObject
{
	Q_OBJECT

public:
	
	facturation(QObject *parent);
	~facturation();
private:

	Ui::facturation ui;
};
