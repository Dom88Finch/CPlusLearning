#include <iostream>
#include <cmath>

class Burger{

    private:
        std::string burgerType = "Beef meat";

    public:

        std::string topping1;
        std::string topping2;

    // use a getter to READ a private attribute  - READ ONLY
    std::string getBurgerType(){
        return burgerType;
    }

    // use a setter to WRITE to our attribute
    void setBurgerType(std::string burgerType){
        // can place additional checks in here to 
        //   eusure that we get the desired input format
        
        this->burgerType = burgerType;
    }
    // can have multiple constructors with same name
    // as long as the parameters are DIFFERENT
   
    // Burger(std::string topping1,std::string topping2 ){
    //     this->topping1 = topping1;
    //     this->topping2 = topping2;
    // }
};

int main() {

    /*
    Abstractions = we hide unnessary data from outside a given class
    getter - function to make a private attribute READABLE
    setter - function to make a private attribute WRITEABLE

    */

    Burger burger1;

    burger1.topping1 = "Bacon Strips";

    std::cout << "The burger type is :" << burger1.getBurgerType();

    std::cout << "\nThe first topping is :" << burger1.topping1;

    burger1.setBurgerType("Chicken Thigh");

    std::cout << "\nThe burger type is :" << burger1.getBurgerType();







    return 0;
}