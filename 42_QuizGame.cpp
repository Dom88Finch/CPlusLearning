#include <iostream>
#include <cmath>

int checkArray(int userInput,int correctValue);
int main() {

    /*
    Create a Quiz Game

    requirements:
    list of Questions and their answers
    check users input to see if they have got the answer correct or not
    keep count of number of correct answers
    finally return the final score
    */

    std::string questions[3][3] = {{"What is the capital of Japan?", "1) Tokyo", "2)London"},
                                {"Where is Air Force One Located?","1) America", "2)Mexico"},
                                {"Which crypto is more valuable?", "1) Ethereum", "2)Bitcoin"}};


    int correctAnswers[3] = {1,1,2};

    int rows = sizeof(questions)/sizeof(questions[0]);
    int cols = sizeof(questions[0])/sizeof(questions[0][0]);

    int usersInput;
    
 
    int currentPoints = 0;
    std::cout << "Welcome to our Quiz Game\n We wil be testing your world knowledge!!\n\n";
    for(int i = 0; i < rows; i++){
        
        std::cout << "\n" <<questions[i][0] <<"\n";
        for(int j = 1; j < cols; j++){
            std::cout << questions[i][j] <<"  ";
        
        }
        std::cout << "\nPlease select an option (1 or 2): ";
        std::cin >> usersInput;
        std::cin.clear();
        fflush(stdin);
        currentPoints += checkArray(usersInput,correctAnswers[i]);


    }
    std::cout << "You got " << currentPoints << "out of " << rows;
}  

int checkArray(int userInput,int correctValue){
    int score = 0;
    if(userInput = correctValue){
        return score + 1;
    }
    else{
        return score;
    }
}

    
    



    








