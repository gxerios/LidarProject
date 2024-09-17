cmake_minimum_required(VERSION 3.1)
project(LidarProject)
set(CMAKE_CXX_STANDARD 11)

include_directories(include/)
include_directories( ${OpenCV_INCLUDE_DIRS} )

find_package( OpenCV REQUIRED )
add_library(robot src/robot.cpp)
add_library(lidar src/lidar.cpp)
add_library(map src/map.cpp)

add_executable(main src/main.cpp)

target_link_libraries( main ${OpenCV_LIBS} )
target_link_libraries(main robot lidar map)