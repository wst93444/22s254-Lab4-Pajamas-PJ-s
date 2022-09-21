#include <iostream>
#include <fstream>
#include <string>

#include "lab.hpp"

void readFiles() {
    std::ifstream myfile;
    myfile.open("README.md");
    if( myfile.is_open() ) {
        char mychar;
        while( myfile ) {
            mychar = myfile.get();
            std::cout << mychar;
        }
    } else {
        std::cout << "The file is not exist.\n";
    }
    myfile.close();
}
