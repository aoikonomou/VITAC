#include "vitac.h"

vitac::vitac(QObject *parent) :
    QObject(parent)
{



    int a=30;
    QMessageBox msgBox;





    msgBox.setText(QString::number(a));
    msgBox.exec();




}
