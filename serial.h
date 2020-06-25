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

    //Init le port de lecture
    void init();

    //lit jusqu'a obtenir un \n
    void checkMsg();


signals :

    //Renvoie la valeur lu vers la classe Interface
    void sendSensorState(QByteArray);


public slots:

    //Lit lorsque des données sont valides
    void onReadyRead();

protected:

    //prot d'écoute
    QSerialPort *m_pinRX = nullptr;

    //enregistre tous les ports disponible
    QList<QSerialPortInfo> m_listPort;

    //Stocke TOUT ce qui est lu
    QByteArray m_msg;

    //Stocke Uniquement tout ce qui est avant un \n
    QByteArray m_msgAll;

};

#endif // SERIAL_H
