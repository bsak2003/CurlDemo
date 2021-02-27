cmake_minimum_required(VERSION 3.17)
project(CurlDemo)

set(CMAKE_CXX_STANDARD 14)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

add_definitions( -DBOOST_ALL_NO_LIB )
add_definitions( -DBOOST_ALL_DYN_LINK )

find_package(CURL CONFIG REQUIRED)
add_executable(CurlDemo main.cpp Http/HttpClient.cpp Http/HttpResponse.cpp)
find_package(BOOST 1.75.0 COMPONENTS json REQUIRED)

target_link_libraries(CurlDemo PRIVATE CURL::libcurl)
target_link_libraries(CurlDemo ${Boost_JSON_LIBRARY})