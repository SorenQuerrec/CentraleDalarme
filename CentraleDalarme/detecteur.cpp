#include "detecteur.h"
#include "ui_detecteur.h"


Detecteur::Detecteur(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Detecteur)
{
    ui->setupUi(this);
}

Detecteur::~Detecteur()
{
    delete ui;
}

void Detecteur::on_pushButtonIntrus_clicked() {
    QMessageBox messageMarche;
    messageMarche.setText("Intrus détecté ! No Temp");
    messageMarche.exec();
}
