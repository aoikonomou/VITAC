#include <QApplication>
#include <QQmlApplicationEngine>
#include <qmessagebox.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));



    int a=30;
   QMessageBox msgBox;

   msgBox.setText(QString::number(a));
   msgBox.exec();


    return app.exec();
}
