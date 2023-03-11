cmake_minimum_required(VERSION 3.0)
project(mouse_move)

#set(SFML_STATIC_LIBRARIES TRUE) # for static link of sfml

add_executable(${PROJECT_NAME} main.cpp)

find_package(SFML 2.5 COMPONENTS graphics window)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include/ )   


target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-window)