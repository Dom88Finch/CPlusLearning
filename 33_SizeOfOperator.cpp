#include <iostream>
#include <cmath>

int main() {


    // sizeof() = obtain the bytes of a variable or class


    double restruant = 39990;
    std::string name = "John Macintosh";

    std::string flowers[] = {"Daffodil", "Rose"};

    std::cout << sizeof(restruant) << " bytes\n";

    std::cout << sizeof(name) << " bytes\n";

    // can count the number of elements in our list
    std::cout << sizeof(flowers)/sizeof(std::string) << " number of elements\n ";


    return 0;
}