# include <iostream>
# include <cmath>

int main() {


    // && check if 2 conditions true
    // || check if at least one/2 conditions true
    // ! reverses the logialstate of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >>temp;

    if (temp >14 && temp< 25){
        std::cout << "Nice weather";
    }
    else if (temp == 5 || temp== 6){
        std::cout << "Slightly cold";
    }
    else if (!(temp == 0) && temp < 5){
        std::cout << "Not Zero";
    }

    else{
        std::cout << "Boring weather";

    }


    return 0;
}
