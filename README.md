# QuranApp

بِسْمِ ٱللّٰهِ الرَّحْمٰنِ الرَّحِيْمِ ,
السَّلاَمُ عَلَيْكُمْ وَرَحْمَةُ اللهِ وَبَرَكَاتُهُ

Quran app is an easy to use quran reader with support for translation in multiple languages and stream beautiful quran recitation . Made with Qt5 .

This Project uses [nlohmann json](https://github.com/nlohmann/json) for json parsing .

![Screenshot 2021-12-31 101436](https://user-images.githubusercontent.com/95064572/147803856-a64a2fd8-51ac-47d0-ab30-6d187070b7cb.png)

![Screenshot 2021-12-31 101500](https://user-images.githubusercontent.com/95064572/147803860-60d600ef-2521-43c9-8d6d-a646c18a22d0.png)


# Build Tools
* Visual Studio 2017/2019
* CMake
* Qt 5 For Windows

# Dependencies
To install dependencies , use vcpkg : https://github.com/microsoft/vcpkg
* libcurl : `vcpkg.exe install curl:x64-windows sqlite3:x64-windows`

# Compiling Instruction
You can either use VS Code or Qt Creator to Build this program
* make a directory called `build` , and cd to `build`
* change the `CMAKE_PREFIX_PATH` in CMakeLists.txt according to your configuration
* run `cmake ..` , then `make`
* after build please add `resources` and `database` directory to the build folder
