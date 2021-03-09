cmake_minimum_required(VERSION 3.9)
project(Quran-app VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\5.12.10\\msvc2017_64;C:\\Users\\Home\\vcpkg\\installed\\x64-windows")
set(APP_ICON "src/icon.rc")

set(SRCS
    src/main.cpp
    src/window.cpp
    src/curl_parser.cpp
    src/window.hpp
    src/db_reader.hpp
    src/curl_parser.hpp
    src/db_reader.cpp
    qdarkstyle/style.qrc
)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(CURL CONFIG REQUIRED)
find_package(unofficial-sqlite3 CONFIG REQUIRED)

add_executable(qapp WIN32 ${SRCS} ${APP_ICON})

target_link_libraries(qapp  PRIVATE Qt5::Widgets CURL::libcurl unofficial::sqlite3::sqlite3)
