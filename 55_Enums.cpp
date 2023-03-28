#include <iostream>
#include <cmath>


enum Day {monday = 0, tuesday=1, wednesday=2,
         thursday = 3, friday = 4, saturday = 5,
          sunday = 6};
int main() {

    /*
    Enums = a user-defined datatype which 
        consists of paired name-integer constants
        GREAT if you have a set of potential options
    */

   Day today = friday;

//    std::cout << "Enter a day: ";
//    std::cin >> today;
   // by using Enums and setting integer values, 
   //   we are able to load data and make use of switch
   switch (today){
        case monday: std::cout << "Its is Monday \n";
            break;
        case tuesday: std::cout << "Its is Tuesday \n";
            break;
        case wednesday: std::cout << "Its is Wednesday \n";
            break;
        case thursday: std::cout << "Its is Thursday \n";
            break;    
        case friday: std::cout << "Its is Friday \n";
            break;
        case saturday: std::cout << "Its is Saturday \n";
            break;
        case sunday: std::cout << "Its is Sunday \n";
            break;
    default: 
        break;
    }

    return 0;
}