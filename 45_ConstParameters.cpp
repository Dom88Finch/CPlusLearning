#include <iostream>
#include <cmath>



void printInfo(const std::string name, const int age);
int main() {



    /* const parameter = parameter that read-only 

    advantages: code is more secure & conveys the intent
                it is also useful for references & pointers

    */

    std::string name = "Micheal";
    int age = 23;

    printInfo(name, age);



    return 0;
}

// by using `const`, we ensure that we cannot modify the variables
void printInfo(const std::string name, const int age){

    /* // The following will bring un an error if the `const` is active
    name = "wono";
    age = 193;

    */

    std::cout << name <<'\n';
    std::cout << age << '\n';

}