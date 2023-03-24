#include <iostream>
#include <cmath>

int main(){


    int a,b;

    
    std::cout << "Please enter the first number: ";
    std::cin >> a;
    std::cout << "Please enter the second number: ";
    std::cin >> b;

    double c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "The Hypthenuse is "<< c;
    return 0;
}