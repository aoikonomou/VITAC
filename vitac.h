#ifndef VITAC_H
#define VITAC_H

#include <QObject>
#include <qmessagebox.h>
#include <QQmlApplicationEngine>

class vitac : public QObject
{
    Q_OBJECT
public:
    explicit vitac(QObject *parent = 0);

signals:

public slots:

};

#endif // VITAC_H
