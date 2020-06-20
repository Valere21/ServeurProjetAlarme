import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.11

Page {

   // anchors.fill:parent


    header: Label {
        objectName: "headText"
<<<<<<< HEAD
        text: qsTr("Archive du :" + index + " Horodatage :" )
=======
        text: qsTr("Archive du :" + index + " Horodatage :" + Date.toLocaleString())
>>>>>>> 88bd0576b132f36d9119a5a007ccdc1de77e5ba5
        color : "lightBlue"
        font.pointSize: 13
        padding: 10
    }

    GridLayout {
        id: grid
        rows: 2
        columns: 2
        anchors.fill: parent

      //  Layout.fillHeight: true
      //  Layout.fillWidth: true

        Label {
            objectName: "luxLabel"
            Layout.row: 0
            Layout.column: 1
            //anchors.top: parent.top
            text:"Capteur de lumière : (valeur) \n horodatage :" + cpp.getDate(soundLabel)
            wrapMode: Text.WordWrap

        }

        Label {
            objectName: "soundLabel"
            Layout.row: 1
            Layout.column: 1
            text:"Capteur ultrason : (valeur) \n horodatage :" + cpp.getDate(soundLabel)

        }
    }
}


/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
