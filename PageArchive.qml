import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.11

Page {

   // anchors.fill:parent
    objectName: "pageView"

    Repeater{

        InfoLayout{

            id: infoLayout

            model: 30


        }

    }


    header: Label {

        objectName: "headText"

        text: qsTr("Archive du :" + cpp.getDate(cpp.getDate))
        color : "#0000ff"
        font.pointSize: 13
        padding: 10

    }

    GridLayout {
        id: grid
        anchors.fill: parent
        rows: 2
        columns: 2

      //  Layout.fillHeight: true
      //  Layout.fillWidth: true

        Label {
            objectName: "luxLabel"
            Layout.row: 0
            Layout.column: 1
            //anchors.top: parent.top
            text:"Capteur de lumière : (valeur) \n horodatage :"
            wrapMode: Text.WordWrap

        }

        Label {
            objectName: "soundLabel"
            Layout.row: 1
            Layout.column: 1
            text:"Capteur ultrason : (valeur) \n horodatage :"

        }
    }
    footer: Label {
        color: "#0000ff"
        text: "page n° " + index
    }
}


/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
