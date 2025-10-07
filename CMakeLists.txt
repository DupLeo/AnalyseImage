cmake_minimum_required(VERSION 3.10)
project(AnalyseImage)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(AnalyseImage src/main.cpp)
target_link_libraries(AnalyseImage ${OpenCV_LIBS})
