#include <iostream>
#include <cmath>

int main() {

    // Fill function fill() - fills a range of elements with a specified value

    const int arrayFoodSize = 10;
    std::string foods[arrayFoodSize];

    fill(foods, foods +arrayFoodSize, "Burger");

    // std::cout << foods[0];
    for(std::string food : foods){
        std::cout << food << "\n";

    }







    return 0;
}