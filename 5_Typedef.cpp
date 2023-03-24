#include <iostream>
#include <vector>

//example type def which is simplified 

//typedef std::string text_t;

using text_t = std::string;
using number_t = int;

int main(){



    text_t firstName = "Bro";
    number_t age = 504;

    std::cout << firstName << '\n';
    std::cout << age << '\n';





    return 0;
}