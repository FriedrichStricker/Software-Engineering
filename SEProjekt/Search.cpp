#include "Search.h"

Search::Search(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Suche");
}

void Search::on_btn_cancel_clicked() {
	Search::close();
}

void Search::on_btn_search_clicked() {
	//string text = ui.lsv_view->text().toStdString();
	//delegate
	Search::close();
}