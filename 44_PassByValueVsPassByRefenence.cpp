#include <iostream>
#include <cmath>

void swapOrder(std::string &A, std::string &B);
int main() {

    // 

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp; 

    // temp = x;
    // x = y;
    // y = temp;

    swap(x,y);
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

// you can reference the current memory of the varialbe to be 
// switched by using the `&` before the variable so that the 
// memory is updated 
void swapOrder(std::string &A, std::string &B){

    std::string temp;
    temp = A;
    A = B;
    B = temp;
    // temp = x;
    // x = y;
    // y = temp;

   
    
}