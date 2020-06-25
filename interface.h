#ifndef Interface_H
#define Interface_H
#include <QObject>
#include <QtQuick>
#include <QTcpSocket>
#include <QTcpServer>
#include "serial.h"

#define V_MAIN      1 //  id des views



class Interface : public QQuickView
{
    Q_OBJECT

public:
    explicit  Interface(QWindow *parent = nullptr);
    bool event(QEvent *event) override;
    ~Interface() override;

    void init();

    void writeSensorLux(QByteArray message);                        //Ecrit message détection de lumière vers app client
    void writeSensorSound(QByteArray message);                      //Ecrit message détection ultrason vers app client


public slots:

    void changeView(QObject* swipe);

    //Récupère la date
    QString getDate();


    //Vérifie que la dernière valeur lu sur le port série est égale à 0.
    bool getFlag(){return m_flag;}

    //Archive dans le qml détection
    void addLuxDetection();

    //Archive dans le qml détection
    void addSoundDetection();

    void addBothDetection();

    //récupère lecture com UART
    void getSensorState(QByteArray msg);

    //Allume/Eteint les voyants
    void luxDetect();
    void soundDetect();

    //Récupère les nouvelles connections TCP
    void onNewConnection();

    //Lit requête client quand "Ready"
    void onReadyRead();

    //Si état socket change
    void socketStateChanged (QAbstractSocket::SocketState socketState);
    void socketError(QAbstractSocket::SocketError socketError);

    //Si socket déconnecter
    void socketDisconnected();

    //Affiche l'item (swipe archive) - définit son opacité
    void displayArchive();

    //récupère l'index courant
    int getIndexArchiveLux(){return m_indexArchive;}



    //enregistre un nouvel objet chaque Component.onCompleted
    void registerLabel(QObject *obj);

private slots:
    //enregistre le nouvel id
    void    viewChanger(int id);

    //charge id
    void    loadMain();


private:

    //vérifie si m_msg vaut 0
    bool m_flag = false;

    //définit l'index

    int m_indexArchive = 0;
    int m_nbrDetec = 0 ;
    QTcpServer *server =  nullptr;
    QTcpSocket *socket = nullptr;
    QList <QTcpSocket*> listSocket;
    Serial lecture;
    int m_pageId;
    QList<QObject*> m_labelList;
    QList<QObject*> m_detectionList;
    QObject* m_swipe;
};

#endif // Interface_H
