#include <iostream>
#include <cmath>


class Animal{
    public:
        bool alive = true;
    
    void eat(){
        std::cout << "This animal is eating\n";

    }

};

class Dog : public Animal{
    public:
    
    void speaks(int x){
        std::cout << "This dog can bark: " << x << " Times \n";
    }
};

class Cat : public Animal{
    public:
    
    void meow(int x){
        std::cout << "This Cat can Purr: " << x << " Times \n";
    }
};


int main() {


    /*
    Inheritance = A class can recieve attribues & methods from other classes

    // childen classes - inherit from Parent Class
    // Adv: Helps to re-use similar code found in multiple classes
    
    */



    Cat dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.meow(3);


    return 0;
}