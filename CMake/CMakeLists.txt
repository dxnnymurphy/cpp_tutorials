cmake_minimum_required(VERSION 3.22.1)

#Project Namee
project(MyTestProject)

# Add main file for the project
add_executable(${PROJECT_NAME} main.cpp)

#Add the Addere library by adding the subdirectory, then linking the library to the project
add_subdirectory(Adder)

target_link_libraries(${PROJECT_NAME} adder)