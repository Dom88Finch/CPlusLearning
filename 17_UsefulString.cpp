#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";

    // use getline when the input may contain SPACES
    std::getline(std::cin, name);

    // gives length of a string
    if (name.length() >10 ){
        std::cout << "Name must be greater than 10characters";
    }
    else if (name.empty()){
        std::cout << "Name must be greater than 0";
    }

    // can append
    std::string email = name.append("@gmail.com");

    // access position in a string using .at()
    std::cout << name.at(0);

    // insert a character in a given position using .insert()
    name.insert(0, '$');

    // find specific character in our strin gusing .find()
    name.find(' ');

    // remove portion of your string using .erase(starting index, ending index)
    name.erase(0,2);


    std::cout <<"your email is: " << email;

    
    

}