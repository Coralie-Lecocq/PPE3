#pragma once

#include <QWidget>
#include "ui_gestion_mat_view.h"

class gestion_mat_view : public QWidget
{
	Q_OBJECT

public:
	gestion_mat_view(QWidget *parent = Q_NULLPTR);
	~gestion_mat_view();

	void gestion_mat_view::updateStock() {
		// recuperer le stock
		// prendre la value dans input
		//
	}

private:
	Ui::gestion_mat_view ui;

};
