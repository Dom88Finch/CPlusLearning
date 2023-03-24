#include <iostream>
#include <cmath>

// global variable 
int myNum = 3;
void printNum();
int main() {

    // Local variables- declared inside a function or block {}
    // Global variables = declared outside of all functions
    
    // local variable
    //int myNum = 1;

    //std::cout << myNum;

    printNum();

    return 0;
}

void printNum(){
    // local variable
    int myNum = 2;
    std::cout << myNum;

    // uses global variable if you add `::` before variable name
    std::cout << ::myNum;
}