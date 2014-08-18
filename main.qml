import QtQuick 2.2
import QtQuick.Controls 1.1

ApplicationWindow {


    id: myTest
   // objectName: "myTest"

    visible: true
    width: 1280
    height: 720
    title: qsTr("VITAC Ver. 0.1")

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    Text {
        id: mainText
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }


    Item {

        id: mainContainer
        anchors.fill: parent

        Rectangle {
            id: rect
            width: 500; height: 500
            color: "lightgray"

            MouseArea {

                anchors.fill: parent

                Text {
                    id: serialInput
                    x: 183
                    y: 161
                    width: 309
                    height: 138
                    text: qsTr("Serial input")
                    font.pixelSize: 12
                }
             //   onClicked: parent.color = "blue"
            }
        }

    }




}
