#include <iostream>
#include <cmath>
#include <ctime>

std::string checkWinner(int playerA){

    // Rock beats scissors
    // Paper beats Rock
    // scissors beats Paper
    // splayerA;
    // playerB;
    // mapping - Rock:1, Paper:2, Scissors:3
    srand(time(NULL));
    int playerB = rand() % 3 + 1;

    std::string winner;
    if(playerA == 1 && playerB == 3){
        winner = "You Win!! PlayerA";
    }
    else if(playerA == 2 && playerB == 1){
        winner = "You Win!! PlayerA";
    }
    else if(playerA == 3  && playerB == 2){
        winner = "You Win!! PlayerA";
    }
    else if(playerA = playerB){
        winner == "Its a TIE";
    }
    else{
        winner = "You Lose !! \n PlayerB Wins";
    }

    return winner;
}

int main(){

    /*
    Rock Paper Scissors game

    requirements
    - computer random selection from a possible of 3 choices
    - user selects own choice
    - function to check if user wins 

    */
   int playerA;
   std::string ourWinner;

   std::cout << "--------------------------------\n";
   std::cout << "Please select an option";
   std::cout << "\n 1) Rock \n 2) Paper \n 3) Scissors \n 4)exit Game\n";
//    std::cin >> playerA;


    do{
        std::cout << "\n--------------------------------\n";
        std::cout << "Please select an option [1,2,3, 4]): ";
        std::cin >> playerA;

        std::cin.clear();
        fflush(stdin);

        switch(playerA){
            
            case 1:
                ourWinner = checkWinner(playerA);
                std::cout << ourWinner;
                break;
            case 2:
                ourWinner = checkWinner(playerA);
                std::cout << ourWinner;
                break;    
            case 3:
                ourWinner = checkWinner(playerA);
                std::cout << ourWinner;
                break;
            
            case 4:
                break;

            default:
                break;
        }
    
    }while(playerA !=4);
}