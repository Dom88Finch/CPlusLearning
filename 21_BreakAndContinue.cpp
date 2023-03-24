#include <iostream>
#include <cmath>

int main() {


    // break = break out of a loop 
    // continue = skip current iteration

    for(int i = 1; i <=20; i++){
        
        if(i==13){
            // skips the iteration
            continue;
        }
        std::cout << i << "\n";

        if(i==18){
            // break stops the code and exits loop
            break;
        }
    }




    return 0;
}