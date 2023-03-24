#include <iostream>
#include <cmath>

int main() {

    // do while loop - does a block of code first, 
    //                  then repeat again if condition is true


    int number;
    
    do{
        std::cout << "Enter a negative number: ";
        std::cin >> number;
    }while(number > 0);

    std::cout << "This number is: " << number;










    return 0;
}