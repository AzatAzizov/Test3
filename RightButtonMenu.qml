import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQml 2.13

Window {
    signal signalExit1   // Задаём сигнал
    width:480
    height:320
    Menu {
        id: mainMenu

        MenuItem {
            text: "Remove"
        }

        MenuItem {
            text: "Rename"
        }

        MenuItem {
            text: "Exit"
        }
    }
}
