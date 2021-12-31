/***
   * Project Name : Quran app
   * Description : an easy to use Quran Reading program in Qt5, supports translations in indian languages as well as quran audio streaming
   *               Specs :-  Multi-language , stream quran
   * Build-Dependencies : libcurl , qt5 libs, nlohmann json : https://github.com/nlohmann/json/ 
   * Developer : Nashid P , Member of Muslim Programmers Community
   *
***/

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include "window.hpp"
#include "winDark.hpp"

int main(int argc, char *argv[])
{
    // Initiate Qt Application
    QApplication qapp(argc, argv);
    qapp.setWindowIcon(QIcon("resources/icon.png"));
    Window *window;                                         // Main Window
    if(winDark::isDarkTheme())
        winDark::setDark_qApp();
    QPixmap pixmap("resources/qapp-splash.jpg");            // Image to show in Splash Screen
    QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint); // Splash Screen object    
    window = new Window;
    splash.show(); // Show Splash Screen
    QTimer::singleShot(3000, &splash, &QWidget::close); // Keep Splash Screen for 3 seconds
    window->show(); // Show Main Window
    return qapp.exec();
}
