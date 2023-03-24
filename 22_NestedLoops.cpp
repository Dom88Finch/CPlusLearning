#include <iostream>
#include <cmath>

int main() {


    // a loop inside of another loop

    // multiplication table


    int timesTable;
    int multiples;

    std::cout << "Please enter the times table value you want: ";
    std::cin >> timesTable;

    std::cout << "Please enter the multiples length: ";
    std::cin >> multiples;


    for(int i = 1; i<= multiples; i++){
        std::cout << "\n";
        for(int j=timesTable; j>=1; j--){
            std::cout << j*i <<" ";
        }
    }





    return 0;
}