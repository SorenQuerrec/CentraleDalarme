#include "detecteurtemporise.h"

DetecteurTemporise::DetecteurTemporise()
{
    connect(&timerIntrus,&QTimer::timeout,this,&DetecteurTemporise::on_timerIntrus_timeout);
    setWindowTitle("DetecteurTemporise");
}

void DetecteurTemporise::on_timerIntrus_timeout()
{
    timerIntrus.stop();
    QMessageBox messageMarche;
    messageMarche.setText("Intrus détecté ! tempo");
    messageMarche.exec();
}

void DetecteurTemporise::on_pushButtonIntrus_clicked() {
    timerIntrus.start(3000);
}