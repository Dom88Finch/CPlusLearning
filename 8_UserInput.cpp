#include <iostream>

// cout << (insert operator)
// cin >> (extration operator)

int main(){


    std::string name;
    int age;

    std::cout << "What's your Full name?: ";
    // std::cin >> name;
    // use the following to get the string after BLANK SPACE
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you?: ";
    std::cin >> age;


    int year = 2023 - age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You were born on the year " << year;
   
    return 0;
}