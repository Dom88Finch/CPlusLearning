#include <iostream>
#include <cmath>

template <typename T, typename U> // template parameter declaration
/*
// instead of repeating the same function with differnt inputs
int max(int x, int y){
    return (x > y) ? x : y;
}
double max(double x, double y){
    return (x > y) ? x : y;
}
*/

// replace our type with the template parameter `T`

// T max(T x, U y){
//     return (x > y) ? x : y;
// }

// using `auto` instead of `T` or `U`, the  compiler returns the correct
// type when we run teh function 
auto max(T x, U y){
    return (x > y) ? x : y;
}
int main() {


    // function template - describes what function looks like.
    // uses: used to generate as many overloaded functions as requried each using differnt data types


    // 
    std::cout << max(1.2,2.4) << '\n';

    // by modifying our template to recieve up to 2 different datatypes
    std::cout << max(1,2.333) << '\n';



    return 0;
}