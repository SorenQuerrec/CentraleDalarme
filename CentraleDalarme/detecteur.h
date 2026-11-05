#ifndef DETECTEUR_H
#define DETECTEUR_H

#include <QDialog>
#include <QTimer>
#include <QMessageBox>
#include "ui_detecteur.h"



namespace Ui {
class Detecteur;
}

class Detecteur : public QDialog
{
    Q_OBJECT

public:
    explicit Detecteur(QWidget *parent = nullptr);
    ~Detecteur();

private slots:
   virtual void on_pushButtonIntrus_clicked();

protected:
    Ui::Detecteur *ui;
};

#endif // DETECTEUR_H
