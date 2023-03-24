#include <iostream>
#include <cmath>
#include <ctime>

int main() {

    // pseudo-random numbers


    srand(time(NULL));
    // dice with random number between 1 and 6
    int num = rand() % 6 +1;
    

    std::cout << num;

    






    return 0;
}