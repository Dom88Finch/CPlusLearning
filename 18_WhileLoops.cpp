#include <iostream>
#include <cmath>

int main() {


// While loop - can repeat code infinate ammount of time

    std::string name;
    // wait until the condition is fulfilled
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;


  




    return 0;
}