#include <iostream>
#include <cmath>

int main() {

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    // temporary variable used and then checked before updating our array 
    std::string userInput;

    for( int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit  " << i <<": ";
        std::getline(std::cin, userInput);
        
        if(userInput== "q"){
            break;
        }
        foods[i] = userInput;

    }
    std::cout << "You like the following food: \n";

    for(std::string food : foods){
        std::cout << food << "\n";
    }

    // second loop does not display any empty array elements
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << "\n";

    }


    return 0;
}