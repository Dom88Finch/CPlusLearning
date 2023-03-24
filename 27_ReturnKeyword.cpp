#include <iostream>
#include <cmath>


std::string combineNames(std::string first, std::string last);
int main() {
    // function that adds users first name, last name 
    // and creates a new string called full name


    std::string firstName;
    std::string lastName;


    std::cout << "Please enter First Name: ";
    std::cin >> firstName;

    std::cout << "Please enter Last Name: ";
    std::cin >> lastName;   

    std::string ourFullName;
    ourFullName = combineNames(firstName,lastName);

    std::cout << "Hello, " << ourFullName;
    return 0;
}

std::string combineNames(std::string first, std::string last){

    std::string fullName;

    fullName.append(first);
    fullName.append(" ");
    fullName.append(last);

    return fullName;
}
