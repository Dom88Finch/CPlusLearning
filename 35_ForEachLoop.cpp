#include <iostream>

int main(){


    // for each loop  = loop that ease the traversl over an iteratable dataset


    std::string employees[] = {"Jose", "Micheal", "Jake"};

    for(std::string employee : employees){
        std::cout << employee << '\n';
    }


    int salaries[]  = {24300,23033, 245324};

    for(int salary : salaries){
        std::cout << salary << '\n';

    }




    return 0;
}