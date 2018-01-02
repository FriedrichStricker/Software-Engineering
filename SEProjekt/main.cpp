#include "Login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setQuitOnLastWindowClosed(true);
	Login w;
	w.show();
	return a.exec();
}
