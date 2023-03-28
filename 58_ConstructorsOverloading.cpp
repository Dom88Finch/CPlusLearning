#include <iostream>
#include <cmath>



class Burger{
    public:
        std::string topping1;
        std::string topping2;

    // can have multiple constructors with same name
    // as long as the parameters are DIFFERENT
    Burger(){
    }
    Burger(std::string topping1){
        this->topping1 = topping1;
    }
    Burger(std::string topping1,std::string topping2 ){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main() {

    /*
    Overloaded constructors = allows for multiple constructors
            with SAME NAME but different parameters
    */

   Burger burger1("Lettuce", "BBQ sause ");

   Burger burger2;
   std::cout << burger1.topping1 << '\n';
   std::cout << burger1.topping2 << '\n';
//    std::cout << burger2 << '\n';





    return 0;
}