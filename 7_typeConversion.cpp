#include <iostream>

int main(){

    /* type conversion - convert a value of one datatype to another
        Implicit = automatic
        Explicit = Precede value with new data type (int)
    */
   double x = (int) 333.14;


   
   char y = 100;


   std::cout << y; 
   std::cout << (char)x;

   return 0;

}
