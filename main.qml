import QtQuick 2.12
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.11
import QtQuick.Extras 1.4



Rectangle {
    id: root
    width: 640
    height: 480
    color: "#cfcece"


    Rectangle {                                                          //Un item est nécessaire plus qu'un une Window
        id: window
        visible: true
        width: (root.width > 600) ? 600 : root.width
        height: (root.height > 480) ? 480 : root.height
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter

        property color rectColor: "blue"

        //    title: qsTr("Hello World")


        Text {
            id: texteServeur
            height: parent.height*0.2
            text: qsTr("Serveur")
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.right: parent.right
            anchors.rightMargin: 0
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 14
        }




        LuxRow {
            id: luxRow
            x: 379
            width: parent.width*0.4
            height: parent.height*0.2
            anchors.right: parent.right
            anchors.rightMargin: 10
            anchors.top: texteServeur.bottom
            anchors.topMargin: 10
        }




        UltraSoundRow {
            id: ultraSoundRow
            width: parent.width*0.4
            height: parent.height*0.2
            anchors.left: parent.left
            anchors.leftMargin: 20
            anchors.top: texteServeur.bottom
            anchors.topMargin: 10
        }


        SwipeView {

            id: swipeView
            anchors.left: columnLayout.right
            anchors.leftMargin: 10
            objectName: "swipeArchive"
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            opacity: 0
            anchors.top: luxRow.bottom
            anchors.topMargin: 10
            anchors.bottomMargin: 10
            anchors.rightMargin: 10
            clip: true

            Repeater {

                id: repeat

                model: 30

                PageArchive {

                    header: Label {
                        visible: true
                        text:qstr(cpp.getDate()) }

                    // anchors.fill: repeat
                }

            }
        }

        ColumnLayout {
            id: columnLayout
            width: parent.width*0.15
            spacing: 10
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            anchors.top: ultraSoundRow.bottom
            anchors.topMargin: 10
            anchors.left: parent.left
            anchors.leftMargin: 20

            Button {
                id: buttonArchive

                text: qsTr("Archive")
                Layout.fillHeight: false
                Layout.fillWidth: true
                onClicked: cpp.displayArchive()

            }

            Button {
                id: nextButt
                text: qsTr("Next")
                Layout.fillWidth: true
                onClicked: {
                    if (swipeView.currentIndex < swipeView.count -1)
                        swipeView.currentIndex = swipeView.currentIndex +1
                }
            }

            Button {
                id: prevButt
                text: qsTr("Prev")
                Layout.fillWidth: true
                onClicked: {
                        if (swipeView.currentIndex >  0)
                    swipeView.currentIndex = swipeView.currentIndex -1

                }
            }
        }
    }

}
/*##^##
Designer {
    D{i:4;anchors_x:20}D{i:5;anchors_width:251;anchors_x:217}
}
##^##*/
