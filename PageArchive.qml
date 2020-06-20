import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.11

Page {

   // anchors.fill:parent


    header: Label {
        objectName: "headText"
        text: qsTr("Archive du :" + index + " Horodatage :" + Date.toLocaleString())
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
            Layout.row: 0
            Layout.column: 1
            //anchors.top: parent.top
            text:"Capteur de lumière : (valeur) \n heure : "
            wrapMode: Text.WordWrap

        }

        Label {
            Layout.row: 1
            Layout.column: 1
            text:"Capteur de lumière : (valeur) \n heure : "

        }
    }
}


/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
