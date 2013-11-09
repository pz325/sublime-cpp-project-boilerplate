sublime-cpp-project-boilerplate
===============================

Sublime Text 2 C++ project boilerplate

Environment
-----------
Windows 7, MinGW, and cmake

Install MinGW
-------------
+ Download this from http://nuwen.net/mingw.html
+ Add MinGW\bin to the system environment variable PATH

Install CMake
-------------
+ Download installer from http://www.cmake.org/cmake/resources/software.html
+ Add CMake 2.8\bin to the system environment variable PATH

Project structure
-----------------
{project root}
  /build
  CMakeList.txt
  head.h
  source.cpp
  /other_sources

Usage
-----
+ Set the default build system to 'make' (Tools -> Build System -> make), so that Ctrl+B can build
+ Ctrl+Shift+P then type 'cmake' to run cmake
