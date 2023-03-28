#include <iostream>

int main() {

    // const ensures that the variable cannot be changed
   const double PI = 3.14159;
   

    // PI = 420;
    int radius = 101;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    std::cout << radius % 10;

    return 0;

}