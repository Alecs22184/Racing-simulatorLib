cmake_minimum_required(VERSION 3.22.0)

project(CMakeRacing simulator)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(Racing simulatorLib SHARED Vehicle.h AirVehicle.h GroundVehicle.h Race.h Race.cpp Camel.h Camel.cpp FastCamel.h FastCamel.cpp Centaur.h Centaur.cpp Broomstick.h
Broomstick.cpp Eagle.h Eagle.cpp MagicCarpet.h MagicCarpet.cpp AllTerrainBoots.h AllTerrainBoots.cpp)
add_executable(CMakeDynLib Racing simulator 6.cpp)
target_link_libraries(CMakeRacing simulator Racing simulatorLib )