#include <iostream>
#include <cmath>

int main() {

    /*
    Null value = special value which meas something with no value
            When pointer is holding null value, that pointer is not pointing to anythin (null pointer)

    
    nullptr = keyword which represents a null pointer literal

    Uses:
        nullpointers are helpful when deciding if an address
        was sucessfully assigned to a pointer


    IMPORTANT: 
        When using pointers, be carful that your code isn't 
        dereferencing null or pointing to free memory
        this will cuase undefined behaviour
    */


   int *pointer = nullptr;
   int x = 123;
   
   pointer = &x;

   std::cout << &x << '\n';
   std::cout << pointer << '\n';

   // we can first check whether our pointer has been assinged a value yet;
   if(pointer == nullptr){
        std::cout << "Have not assigned a value";
        // dont run the following if you have not referenced to a value 
        // std::cout << *pointer;
           }
    else{
        std::cout << "Already assigned a value \n";
        std::cout << *pointer;

    }


    return 0;
}