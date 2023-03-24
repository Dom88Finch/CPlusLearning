#include <iostream>
#include <cmath>


int main(){

    double x = 3.84;
    double y = 4;
    double z;

    // z = std::max(x,y); // maximum value
    // z = std::min(x,y); // minimum value
    // z = pow(2,4); // power
    // z = sqrt(9); // square root
    // z = abs(-3); // absolute value 
    // z = round(x); // default round 
    z = ceil(x); // round up 
    // z = floor(x); // round down



    std::cout << z;

    return 0;  
}