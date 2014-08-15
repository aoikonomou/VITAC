#include <QApplication>
#include <QQmlApplicationEngine>
#include <qmessagebox.h>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));




//    int a=30;
//   QMessageBox msgBox;

//   QObject *myExample = object->findChild<QObject*>("textExample");
//   myExample->setProperty("text", "Paparounes");

//   msgBox.setText(QString::number(a));
//   msgBox.exec();


    return app.exec();
}
