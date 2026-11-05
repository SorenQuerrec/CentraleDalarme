#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include <QDialog>
#include <QTimer>
#include <QMessageBox>
#include "ui_detecteur.h"
#include "detecteur.h"

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();


private:
    QTimer timerIntrus;

private slots:
    void on_timerIntrus_timeout();
    virtual void on_pushButtonIntrus_clicked();
};

#endif // DETECTEURTEMPORISE_H
