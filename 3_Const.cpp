#include <iostream>

int main() {

    // const ensures that the variable cannot be changed
   const double PI = 3.14159;
   

    // PI = 420;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;

}