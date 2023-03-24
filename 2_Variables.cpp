#include <iostream>

int main() {

    int x; //declaration
    x = 5; //assignment

    int y =6; // declaration + assignment together

    int sum = x + y;

    /*
    different datatypes

    integer - whole number - int
    double - number including decimal - double
    char - single character - char
    boolean - (true or false) - bool
    string - objects that represents a sequence of text - string
    */

    char grade = 'A';
    double temperature = 25.1;
    bool student = false;
    bool forSale = true;
    std::string name = "Torreto";
    std::cout << "Hello " << name << '\n';



    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    return 0;

}