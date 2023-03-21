cmake_minimum_required(VERSION 3.22.1)

#Project Name
project(MyTestProject VERSION 1.0)

#Used for versioning
configure_file(MyTestProjectConfig.h.in MyTestProjectConfig.h)

# Add main file for the project
add_executable(${PROJECT_NAME} main.cpp)

#Add the Addere library by adding the subdirectory, then linking the library to the project!
add_subdirectory(Adder)

target_link_libraries(${PROJECT_NAME} adder)

# include binary directory to write the version name to it
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})