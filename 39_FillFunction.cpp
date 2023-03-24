#include <iostream>
#include <cmath>

int main() {

    // Fill function fill() - fills a range of elements with a specified value
    const int arrayFoodSize = 18;
    std::string foods[arrayFoodSize];


    fill(foods, foods +(arrayFoodSize/3), "Burger");
    fill((foods + arrayFoodSize/3), foods + (arrayFoodSize/3)*2, "Chicken");
    fill(foods + (arrayFoodSize/3)*2, foods + arrayFoodSize, "Kebab");

    // std::cout << foods[0];
    for(std::string food : foods){
        std::cout << food << "\n";

    }







    return 0;
}