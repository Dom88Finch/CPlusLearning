#include <iostream>
#include <cmath>

struct cars{
    std::string model;
    double cost;
    bool available;
};


int main() {

    /*
    Struct = structure that groups related variables under the SAME name.
        can store multiple values of different datatypes (string, int, ...)

        variables = members

        can be accesd with `.` Class Member Access Operation

    */



   cars car1;
   car1.cost = 42000;
   car1.model = "Nissan GTR";
   car1.available = false;

   std::cout << car1.model << '\n';
   std::cout << car1.cost << '\n';
   std::cout << car1.available << '\n';


    return 0;
}