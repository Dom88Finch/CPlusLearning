#include <iostream>
#include <cmath>

int main() {


    // Calcuator

    int a;
    int b;
    char symbol;

    std::cout <<"=========== Our Calculator =================== \n";
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter operator (+ - * /): ";
    std::cin >> symbol;
    std::cout << "Enter second number: ";
    std::cin >> b;

    switch (symbol) {
        case '+':
            std::cout << a + b;
            /* code */
            break;
        case '*':
            std::cout << a * b;
            /* code */
            break;
        case '-':
            std::cout << a - b;
            /* code */
            break;
        case '/':
            std::cout << a / b;
            /* code */
            break;
    
        default:
            std::cout << "Please enter a valid operator";

                
            break;
    }

    std::cout << "\n ====================================";



    return 0;

}