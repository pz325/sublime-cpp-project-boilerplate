# example CMakeLists.txt
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(helloworld)

# find boost
SET(Boost_USE_STATIC_LIBS ON) 
SET(Boost_USE_MULTITHREADED OFF)  
SET(Boost_USE_STATIC_RUNTIME OFF)
SET(Boost_ADDITIONAL_VERSIONS "1.54.0") 
FIND_PACKAGE(Boost COMPONENTS regex REQUIRED)

# include directories
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})

# add executables
ADD_EXECUTABLE(helloworld helloworld.cpp)

# link libraries
TARGET_LINK_LIBRARIES(helloworld ${Boost_LIBRARIES})
