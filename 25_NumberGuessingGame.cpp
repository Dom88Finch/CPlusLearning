#include <iostream>
#include <cmath>
#include <ctime>
int main() {

    // Number Guessing Game

    int guess;


    int number;

    // alternative generate random number
    
    srand(time(NULL));
    number = (rand() % 100) + 1;

    int gameLives = 10;



    std::cout << "----Number Guessing Game--";
    do{

        std::cout << "Guess the number (1 - 100): ";
        std::cin >> guess;
 
        if (guess > number){
            std::cout << "Number is too High";
        }
        else if (guess < number){
            std::cout << "Number is too Low";
        }
            
        else{

            std::cout << "You win!! the correct number was: " << guess;
            break;
        }
        std::cout << "\n Lives left: " << gameLives--;

    }while(gameLives > 0);

    


    








    return 0;
}