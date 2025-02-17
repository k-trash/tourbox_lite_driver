cmake_minimum_required(VERSION 3.16.3)
project(tourbox_lite_driver CXX)

add_subdirectory(lib/serial_connect)

include_directories(
	include
	lib/serial_connect/include
)

link_directories(
	include
	lib/serial_connect/include
)

add_executable(tourbox_lite_driver src/tourbox_lite_driver.cpp)
target_link_libraries(tourbox_lite_driver
	serial_connect
)