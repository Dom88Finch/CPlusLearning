#include <iostream>
#include <cmath>

class Phone{
    // attributes
    public:
        int phoneNumber;
        std::string modelType;
        int releaseYear;

        // methods  
        void makeCalls(){
            std::cout << "\nWould you like to make a Call?: ";
    
        }
        void recieveCalls(){
            std::cout << "\nWould you like to recieve a Call?: ";

        }
        void getAgeOfPhone(){
            std::cout << "\nThe age of the phone is ";
        }

        void ourModelType(){
            std::cout << "\nThe model type of the phone is: ";

        }
};

void displyInfo(Phone phone);

int main() {


    /*
    
    object  = collection of attributes & methods

    - can have characteristice & could perform actions
    - Used to mimic real world items e.g. Phone, chair, ...
    - created from class which acts as a blueprint

    e.g Phone - attributes (version type, service provider )
              - methods - (make calls, recieve calls, play games, ...)
    */


    Phone phone1;

    phone1.phoneNumber = 07123123123;
    phone1.modelType = "Huwei";
    phone1.releaseYear = 2011;


    // std::cout << phone1.modelType << '\n';
    // std::cout << phone1.phoneNumber << '\n';
    // std::cout << phone1.releaseYear << '\n';
    displyInfo(phone1);


    phone1.makeCalls();
    phone1.recieveCalls();
    phone1.ourModelType();

    return 0;
}

void displyInfo(Phone phone){
    std::cout << phone.modelType << '\n';
    std::cout << phone.phoneNumber << '\n';
    std::cout << phone.releaseYear << '\n';


}