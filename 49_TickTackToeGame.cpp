#include <iostream>
#include <cmath>

void checkBoard(std::string board[]);
void generateBoard();
void playerInput();

int main() {
    /*
    Tic Tac Toe
    
    3 * 3 grid 
    2 input options - X or O

    2 players 

    Win game if get 3 symbols in a row

    */

//    for(int i=0; i <= 2; i++){
//         for(int j=1; j <= 3; j++){
//             std::cout << "| " << i+1+j << " |";
//             }
//         std::cout << '\n';

//     }
    std::string board[3][3] = {{"X", "X", "X"},
                                {"O", "X", "O"},
                                {"X", "X", "X"}};


    // Vertical
    for(int i=0; i <3; i++ ){
        // std::cout << board[0][i] << '\n';
        for(int j=0;  j< 3; j++){
            // std::cout << board[i][j] << '\n';
            if(board[i][j] == board[i+1][j] && board[i+1][j] == board[i+2][j]){
                // std::cout << "Vertical Match Found";
                std::cout << "\n Vertical Match Found\n";
                std::cout << "Player with '" << board[i+1][j] <<"'Wins!! \n";   
                break;
            }
        }
    }

    // Horizontal 
    bool check = false;
    std::string winner;
    for(int i=0; i <3; i++ ){
        // std::cout << board[0][i] << '\n';
        // std::cout << '\n';
        for(int j=0;  j< 3; j++){
            // std::cout << board[i][j] << '\n';
            if(board[i][j+1] == board[i][j+1] && board[i][j+1] == board[i][j+2]){
                // std::cout << "\nHorizontal Match Found\n";
                // std::cout << "Player with '" << board[i][j+1] <<"'Wins!! \n";
                check = true;
                winner = board[i][j+1];
                break;
            }
        }
    }

    
    std::cout << "wenoi: " << check << '\n';


    // check diagonal 

    // [0][0], [1][1], [2][2]
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        std::cout << "Diagonal match found";
    }
    else if(board[0][2] == board[1][1] && board[2][0] == board[2][2]){
        std::cout << "Diagonal match found";
    }
    
            
 
    // for(int i=0; i <3; i++ ){
    //     std::cout << '\n';
    //     for(int j=0;  j< 3; j++){
    //         std::cout << "| " << board[i][j] << " |";
    //         // std::cout << board[i][j] << '\n';
    //     } 
    // }

    return 0;
    
}

void generateBoard(){
    std::string board[3][3] = {{"X", "O", "X"},
                                {"X", "X", "O"},
                                {"X", "O", "X"}};


    // checkBoard(board);
    // for(i=1; i < 3; i++){
    //     std::cout 1
    // }
}
void playerInput(){

    char playerOption;

    std::cout << "Please select an input: ";
    
}

void checkBoard(std::string board[]){

    // int rows = sizeof(board)/sizeof(board[0]);
    // int columns = sizeof(board[0])/sizeof(board[0][0]);

    // checking board
    for(int i=0; i <=3; i++ ){
        for(int j=0;  j<= 3; j++){
            std::cout << board[i][j] << '\n';
            // if(board[i][j] == board[i][j] == board[i][j]){
            //     std::cout << "Match Found";
            // }
        }
    }
 }