#include <iostream>
#include <cmath>

int main() {



    // Iterating over the elements of an array 

    std::string employees[] = {"Jose", "Micheal", "Jake"};

    for(int i = 0; i < sizeof(employees)/sizeof(std::string); i++){

        std::cout << employees[i] <<"\n";
    }







    return 0;
}