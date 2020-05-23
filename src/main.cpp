#include <iostream>
#include <QApplication>
#include "mainwindow.h"
#include "a.h"

int main(int argc, char* argv[])
{
	std::cout << "Hello world!" << std::endl;

	QApplication app(argc, argv);

	{
		A a;
	}

	MainWindow mainWindow;
	mainWindow.show();

	return app.exec();
}