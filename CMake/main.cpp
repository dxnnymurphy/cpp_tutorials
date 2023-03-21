#include <iostream>
#include "Adder/adder.h"
#include <MyTestProjectConfig.h>


//Argc is argcount and argv is arg values
int main(int argc, char * argv[]) {
    // Standard introduction to every coding language, the simple Hello World program :) 
    std::cout << "Hello, World!\n";
    std::cout << add(72.1f, 145.5f) << "\n";
    std::cout << argv[0] << "Version:" << MY_TEST_PROJECT_VERSION_MAJOR << "." << MY_TEST_PROJECT_VERSION_MINOR << "\n";
    return 0;
}