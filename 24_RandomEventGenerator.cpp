#include <iostream>
#include <cmath>
#include <ctime> 
int main() {

    // uses current time to generate numbers
    srand(time(0));

    int randNum = rand() % 5 + 1;

    std::cout << randNum;

    switch(randNum){
        case 1: std::cout << "  You win a bumber sticker \n";
                break;
        case 2: std::cout << "  You win a sweet \n";
                break;
        case 3: std::cout << "  Not too bad";
                break;
        case 4: std::cout << "  You win a HIGH FIVE";
                break;
        case 5: std::cout << "  You lose! Try Again";
                break;

    }








    return 0;
}