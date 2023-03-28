#include <iostream>
#include <cmath>

int main() {


    // Memory address - location in memory where data is stored
    //                 this can be accessed with `&` (address of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    // diplays location where the variable is stored in form of Hexadecimal
    std::cout << &name << '\n'; 
    std::cout << &age << '\n';
    std::cout << &student << '\n'; // smallest memory since only boolean




    return 0;
}