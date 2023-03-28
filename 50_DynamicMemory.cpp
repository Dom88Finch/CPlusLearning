#include <iostream>
#include <cmath>

int main() {


    /*
    Dynamic memory = Memory that is allocated after a program is 
                    already compiled & running.
                    Use the 'new' operator to allocate memory 
                    in the 'heap' rather than the 'stack'

        Uses: when we dont know how much memory we will need, 
                Makes our programs more flexible especially 
                when accepting user input.
    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Adress: " << pNum << " " << *pNum << '\n';
    
    // use delete operator to free up memory - do this whenever you use the 'new' operator
    delete pNum;


    char *pGrades = NULL;
    int size;

    std::cout << "HOwm many grades to enter in?: ";
    std::cin >> size; 

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade number " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";  
    }
    // ensure we clear our memory afterwards
    delete[]  pGrades;
    


    

    return 0;
}