cmake_minimum_required(VERSION 2.6)
project(MillerNull)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SOURCE_FILES
        src/IconFactory.h
        src/IconFactory.cpp
        src/IconShapes.h
        src/IconShapes.cpp
        src/MillerNull.h
        src/MillerNull.cpp
        src/pluginMain.cpp
        )


set(CMAKE_MODULE_PATH /media/miller/BAGHEERA/cadaver/CMAKE)

find_package(Maya REQUIRED)

include_directories(${MAYA_INCLUDE_DIR})
link_directories(${MAYA_LIBRARY_DIR})

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${MAYA_LIBRARIES})

MAYA_PLUGIN(${PROJECT_NAME})