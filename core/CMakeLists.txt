cmake_minimum_required(VERSION 3.21.0)
project(Ourbooks_bin)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Core	CONFIG REQUIRED)
find_package(Qt5Widgets	CONFIG REQUIRED)
find_package(Qt5Gui		CONFIG REQUIRED)

add_executable(Ourbooks_bin
	src/main.cpp
	src/MainWindow.cpp
	include/MainWindow.hpp
)

target_include_directories(Ourbooks_bin PUBLIC
	include
)

target_link_libraries(Ourbooks_bin
	Qt5::Core
	Qt5::Widgets
	Qt5::Gui
	Ourbooks
)
