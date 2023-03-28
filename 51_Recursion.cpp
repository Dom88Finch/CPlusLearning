#include <iostream>
#include <cmath>

// iterative apporach 
void walk(int steps);

// recursive approach 
void secondwalk(int steps);
int main() {


    /*
    Recursion = a programming technique where a function invokes itself from within
                by breaking a complex consept into repeatable single steps

        
        (iterative vs recursive)

    Pros: Less code & cleaner
        Useful for sorting & searching algos

    Cons: Uses more memory & slower

    if we dont have an exit case for our recursion, we would 
    end up in a infinite loop. This is called a "Stack overflow"

    this is because when we invoke our function, we add a frame to our
    stack, when our stack gets overloaded, we will then get a stack overflow
    
    */

    walk(5);

    secondwalk(10);

    return 0;
}

// iteration 
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "Took a step!! \n";
    }
}

// recursive
void secondwalk(int steps){
    if(steps >0){
        std::cout << "Took a second step!! \n";

        secondwalk(steps - 1);
    }
}
