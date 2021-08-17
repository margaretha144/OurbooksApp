cmake_minimum_required(VERSION 3.21.0)
project(Ourbooks VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

option(BUILD_EXE "executable building required" Off)

if(${BUILD_EXE})
	add_subdirectory(core)
endif()

#set(RESOURCES_FILES
#	resources/OurbooksResources.qrc
#)

set(INCLUDE_FILES
	include/MenuBar.hpp
	include/MainWidgets.hpp
	include/BookWidget.hpp
	include/HomeWidget.hpp
	include/ExploreWidget.hpp
	include/OptionsWidget.hpp
	include/AboutWidget.hpp
)

set(SOURCE_FILES
	src/MenuBar.cpp
	src/MainWidgets.cpp
	src/BookWidget.cpp
	src/HomeWidget.cpp
	src/ExploreWidget.cpp
	src/OptionsWidget.cpp
	src/AboutWidget.cpp
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
find_package(Qt5Gui CONFIG REQUIRED)

add_library(Ourbooks STATIC
	#	${RESOURCES_FILES}
	${INCLUDE_FILES}
	${SOURCE_FILES}
)

target_include_directories(Ourbooks PUBLIC
	include
)

if(CMAKE_COMPILER_IS_GNUCXX)
	target_compile_options(Ourbooks PRIVATE
		-ansi -pedantic
		-Wall -Wextra
		# -Weffc++
		-Woverloaded-virtual
		-Winit-self
		-Wunreachable-code
	)
endif(CMAKE_COMPILER_IS_GNUCXX)

target_link_libraries(Ourbooks
	Qt5::Core
	Qt5::Widgets
	Qt5::Gui
)
