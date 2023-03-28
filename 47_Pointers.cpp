#include <iostream>
#include <cmath>

int main() {

    // pointers = variable that stores memory address of another variable

    // & address-of operator 
    // * dereference operator 

    std::string name = "John";
    std:: string *pName = &name;

    // pointer location 
    std::cout << pName;
    // pointer value accessed using *
    std::cout << *pName;

    int age = 231;
    int *pAge = &age;

    std::cout << '\n';
    std::cout << pAge << " : " << *pAge;

    std::string cars[3] = {"Mustang", "GTA", "Nissan"};

    std::string *pCars = cars;
    std::cout << '\n';
    // gives only the first element from our array
    std::cout << *pCars;






    return 0;
}