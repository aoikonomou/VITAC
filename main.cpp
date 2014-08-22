#include <QApplication>
#include <QQmlApplicationEngine>
#include "vitac.h"
#include <QtSerialPort>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));



    // Step 1: get access to the root object
    QObject *rootObject = engine.rootObjects().first();
    QObject *qmlObject = rootObject->findChild<QObject*>("myTest");


    // Step 2a: set or get the desired property value for the root object
    rootObject->setProperty("height", 400);
    //qDebug() << rootObject.property("visible")

    // Step 2b: set or get the desired property value for any qml object
   qmlObject->setProperty("width", 24);
   // qDebug() << qmlObject.property("visible");



vitac andreas;
QSerialPort mySerial;
mySerial.setPortName("com4");
mySerial.setBaudRate(QSerialPort::Baud9600);
mySerial.setDataBits(QSerialPort::Data8);
mySerial.setParity(QSerialPort::NoParity);
mySerial.setStopBits(QSerialPort::OneStop);
mySerial.setFlowControl(QSerialPort::NoFlowControl);
mySerial.open(QIODevice::ReadWrite);
mySerial.write("Writing through serial from PC");
mySerial.close();


    return app.exec();
}
