#include <iostream>
#include <cmath>

struct Food{
    std::string foodType;
    double calories;
    double cost;
    bool available = true;
    double discount;

};

void displayData(Food &snacks);

void applyPriceCoupon(Food &snacks, double discount);
int main() {

    Food food1;
    Food food2;

    food1.foodType = "Burger";
    food1.calories = 550;
    food1.cost = 4.99;

    food2.foodType = "Chicken Breast";
    food2.calories = 650;
    food2.cost = 6.99;

    applyPriceCoupon(food1, 0.70);

    displayData(food1);
    // displayData(food2);
    // std::cout << food1.foodType << '\n';
    // std::cout << food1.calories << '\n';
    // std::cout << food1.cost << '\n';
    // std::cout << food1.available << '\n';

    // std::cout << food2.foodType << '\n';
    // std::cout << food2.calories << '\n';
    // std::cout << food2.cost << '\n';
    // std::cout << food2.available << '\n';
    // std::cout << &food1 << '\n';




    return 0;
}

void displayData(Food &snacks){

    // std::cout << &snacks << '\n';
    std::cout << snacks.foodType << '\n';
    std::cout << snacks.calories << '\n';
    std::cout << snacks.cost << '\n';
    std::cout << snacks.available << '\n';
    std::cout << snacks.discount << '\n';

}

void applyPriceCoupon(Food &snacks, double discount){

    snacks.discount = snacks.cost * discount;

    // std::cout << snacks.discount << '\n';
    
}