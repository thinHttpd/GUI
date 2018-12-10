#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyGUI.h"
class MyGUI : public QMainWindow
{
	Q_OBJECT
public:
	MyGUI(QWidget *parent = Q_NULLPTR);
    //void setFileFormat(char * temp);
private slots:
	int onShowClicked1(bool checked);
	int onShowClicked2(bool checked);
	int onShowClicked3(bool checked);
	int onShowClicked4(bool checked);
	int onShowClicked5(bool checked);
private:
	Ui::MyGUIClass ui;
	inline QString getPath();
};
