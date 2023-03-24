#include <iostream>
#include <cmath>

int main() {



    double temp;

    char unit;

    std::cout << "======== Temperature conversion ===============\n ";
 

    std::cout << "Please enter temperatur units (c-celcious, f-farenheight): ";
    std::cin >> unit;

    
    if (unit == 'F' || unit == 'f'){
        
        std::cout << "Please enter the temp: ";
        std::cin >> temp;
        temp = 1.8 * temp + 32;

        std::cout << "Our temperature in Celcious  is "<<temp;


    }
    else if (unit == 'C' || unit == 'c'){

        std::cout << "Please enter the temp: ";
        std::cin >> temp;
        temp =  (temp - 32)/1.8;
        std::cout << "Our temperature in Farenhieght is "<<temp;

    }
    else {
        std::cout << "Enter either celcious or Farenheight";

    }
    


    
    std::cout << "\n =======================";




    return 0;

}