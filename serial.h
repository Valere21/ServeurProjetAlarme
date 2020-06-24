#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class Serial: public QObject

{
    Q_OBJECT


public:
    Serial();

    void init();
    void checkMsg();


signals :

    void sendSensorState(QByteArray);


public slots:

    void onReadyRead();

protected:

    QSerialPort *m_pinRX = nullptr;
    QList<QSerialPortInfo> m_listPort;

    QByteArray m_msg;
    QByteArray m_msgAll;
    bool m_flag = true;



    //QList <QSerialPort> m_listPort;
};

#endif // SERIAL_H
