#include <QApplication>
#include <QQmlApplicationEngine>
#include "vitac.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));



    // Step 1: get access to the root object
    QObject *rootObject = engine.rootObjects().first();
    QObject *qmlObject = rootObject->findChild<QObject*>("mainWindow");

    // Step 2a: set or get the desired property value for the root object
    rootObject->setProperty("height", 100);
    //qDebug() << rootObject.property("visible")

    // Step 2b: set or get the desired property value for any qml object
    //qmlObject->setProperty("visible", true);
   // qDebug() << qmlObject.property("visible");



vitac andreas;

    return app.exec();
}
