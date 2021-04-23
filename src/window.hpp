#pragma once
#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QTextEdit>
#include <QCheckBox>
#include <vector>
#include <QTextCursor>
#include <QTextBlockFormat>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QPixmap>
#include <QMessageBox>
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QGridLayout>
#include <QUrl>
#include <QtMultimedia/QtMultimedia>
#include <QProgressBar>
#include <QSlider>
#include "curl_parser.hpp"
#include "db_reader.hpp"

class Window : public QMainWindow , public CURLParser
{
    Q_OBJECT
    public:
        Window();
    private:
        int surah_number = 0;
        bool dark_mode_enabled = false;
        bool quran_is_playing = false;
        bool quran_is_paused = true;
        QUrl QuranUrl = "https://server8.mp3quran.net/afs/001.mp3";
        void createMenu();
        void createTaskbar();
        QGroupBox *createComboBox();
        QGroupBox *createTextBox();
        QGroupBox *createPlayerUi();
        QComboBox *surah = nullptr;
        QComboBox *translation = nullptr;
        QTextEdit *show_surah = nullptr;
        QTextEdit *show_translation = nullptr;
        QMenuBar *menuBar = nullptr;
        QMenu *Menu = nullptr;
        QAction *about = nullptr;
        QAction *darkmode = nullptr;
        QAction *prayertimes = nullptr;
        QTimer *timer = nullptr;
        QLabel *display = nullptr;
        QLabel *imsak = nullptr;
        QLabel *fajr = nullptr;
        QLabel *sunrise = nullptr;
        QLabel *zuhr = nullptr;
        QLabel *asr = nullptr;
        QLabel *maghrib = nullptr;
        QLabel *isha = nullptr;
        QLabel *midnight = nullptr;
        QLabel *sunset = nullptr;
        QLineEdit *Country = nullptr;
        QLineEdit *City = nullptr;
        QPushButton *Show = nullptr;
        QWidget *PrayerTimeWidget = nullptr;
        QWidget *MediaPlayerWidget = nullptr;
        QMediaPlayer Mediaplayer;
        QPushButton *play = nullptr;
        QPushButton *pause = nullptr;
        QPushButton *stop = nullptr;
        QSlider *positionSlider = nullptr;
        QLabel *positionLabel = nullptr;
        void getSurah(std::string, std::string);
        void getTranslation(std::string, std::string);
        QUrl getQuranUrl(int surah_number);
    private slots:
        void showSurah();
        void showTranslation();
        void showAbout();
        void setDarkMode();
        void showTime();
        void showPrayerTimes();
        void getPrayerTimes();
        void set_play();
        void set_pause();
        void set_stop();
        void updateDuration(qint64 duration);
        void updatePosition(qint64 position);
};

#endif
