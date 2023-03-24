#include <iostream>
#include <cmath>


double getTotal(double prices[], int size);
int main() {


    double prices[] = {34.34, 22.33, 49.23, 394};
    
    int size = sizeof(prices)/sizeof(prices[0]);
    
    double total = getTotal(prices, size);

    std::cout << "Sum of our Prices is: ";
    std::cout << "£" << total;


    return 0;
}

/*
When a function recieves an array, It decays into a pointer 
and does not know how long our array is. THerefore, if we want to 
loop over the current elements, we will need to ensure that we pass in the 
size of our array as a variable.
*/
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}