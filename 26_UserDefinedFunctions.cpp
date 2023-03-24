#include <iostream>
#include <cmath>

// must declare the type of variable you are going to use
void merryChistmas(std::string name){
    std::cout << "\nMerry chirstmas "<< name;
    std::cout << "\nWe wish you a merry chirstmas\n";
    std::cout << "We wish you a merry chirstmas\n";
    std::cout << "We wish you a merry chirstmas\n";
    std::cout << "And a Happy New Year!!";
           
}


int main() {

    // Function = Block of reusable code

    std::string name = "Micheal";
    merryChistmas(name);


    return 0;
}