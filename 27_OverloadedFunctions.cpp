#include <iostream>
#include <cmath>


double calculateArea(double a, double b);
int main() {

    double a, b;

    // return = will return a value back to where you called our function 

    std::cout << "Enter the length: ";
    std::cin >> a;

    std::cout << "Enter the Width: ";
    std::cin >> b;
    
    double area = calculateArea(a,b);

    std::cout << "Our Area is: " << area;
    return 0;
}

double calculateArea(double a, double b){
   double area =  a * b;
   return area;
}