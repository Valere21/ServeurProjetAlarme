import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.11

Page {

   // anchors.fill:parent


    header: Label {
        objectName: "headText"
<<<<<<< HEAD
        text: qsTr("Archive du :" + index )
=======
        text: qsTr("Archive du :" + index + " Horodatage :" )
>>>>>>> 18358d90cbee245ab24f4d4afd95a98be6a20516
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
<<<<<<< HEAD
            text:"Capteur de lumière : (valeur) \n horodatage :"
=======
            text:"Capteur de lumière : (valeur) \n horodatage :" + cpp.getDate(soundLabel)
>>>>>>> 18358d90cbee245ab24f4d4afd95a98be6a20516
            wrapMode: Text.WordWrap

        }

        Label {
            objectName: "soundLabel"
            Layout.row: 1
            Layout.column: 1
            text:"Capteur ultrason : (valeur) \n horodatage :"

        }
    }
}


/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
