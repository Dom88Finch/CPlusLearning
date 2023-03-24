
#include <iostream>
#include <cmath>

int main() {
    
    // If statements


    int age;

    std::cout << "Enter your Age: ";
    std::cin >> age;

    if (age < 18){
        std::cout << "It seems that you are too Young. Try again in "<<18-age<<" Years :)";
    }
    else if (age >=100){
        std::cout << "Are you sure that is your age?";
    }
    else {
        std::cout << "Congratulations you may enter";
    }1


    return 0;


}