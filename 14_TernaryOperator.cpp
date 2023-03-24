#include <iostream>
#include <cmath>
int main(){

    // ternary operator ?: = replacement to an if/else statement
    //  (condition) ? (expression1) : (expression2);


    int grade = 75;
    (grade >= 60) ? std::cout << "You pass!" : std::cout << "You Failed";

    std::cout << "\n";
    int number = 1;
    (number % 2 ==0) ? std::cout << "Even" : std::cout << "Odd";


}