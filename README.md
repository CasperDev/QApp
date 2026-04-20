# Qt Application template
This project is designed to use with Qt Creator

## Qt project template with subprojects:
- QApp - QWidgedApplication
- cli - command line tool
- libcore - library with all features used by other subprojects
- tests - QTest subproject with 1 test example
- bench - QTest subproject for benchmarking library code

## Requirements
- Qt6 installed with all dev tools
- Optional Visual Studio 2026 Community or just toolchain

## Building from Qt Creator
Open CMakeLists.txt in Qt Creator and select the desired kit.
After that you can select one of target to build or use Build -> Rebuild All


## Building from Visual Studio 2026
CMakeUserPresets.json is configured to use Visual Studio 2026 with CMake. 
You can open the project in Visual Studio and select one of the major Platforms
and desired configuration:
- Local machine - x64 Debug, x64 Release
- WSL - Linux Debug, Linux Release
- *remote Linux* - Linux Debug, Linux Release
- *Mac OS* - macOS Debug, macOS Release

*Note*: In order to use remote Linux or Mac OS configuration You must configure
SSH connections to Remote Systems via Connection Manager

After selecting the desired configuration, use **Project** -> **Delete Cache and Configure**.
Next you can select one of target to build or use **Build -> Rebuild All**.
Target(s) will be build in out/build directory on the remote system and you can run it on remote system.

Currently Launching and Debugging is supported only on Local Machine (Windows).

