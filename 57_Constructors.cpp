#include <iostream>
#include <cmath>


class Student{

    public:
        std::string name;
        std::string courseName;
        int age;
        int gradeYear;

    Student(std::string name,std::string courseName,int age,int gradeYear){
                this->name = name;
                this->courseName = courseName;
                this->age = age;
                this->gradeYear = gradeYear; 

    }
};

class ShoppingMall{
    public:
        std::string item;
        std::string brand;
        bool containsMetal;
        double price;
        double batteryLife;

    ShoppingMall(std::string item,
        std::string brand,
        bool containsMetal,
        double price,
        double batteryLife){
        this->item = item;
        this->brand = brand;
        this->containsMetal = containsMetal;
        this->price =  price;
        this->batteryLife = batteryLife;
        }
};

void displyInfo(Student student);

void displayShop(ShoppingMall shop);

int main() {

    /*
    Costructor = a special method that is automatically called when 
                an object is instantiated useful for assigning values to attributes
                as arguments         
    */


    Student student1("Hayley", "French", 23,3);
    displyInfo(student1);

    Student student2("Clark","Biology", 33, 5 );
    displyInfo(student2);

    ShoppingMall shopItem("TV", "Sony", true, 965.99, 22);
    displayShop(shopItem);

    return 0;
}

void displyInfo(Student student){
    std::cout << "--------------------\n";
    std::cout << student.name << '\n';
    std::cout << student.courseName << '\n';
    std::cout << student.age << '\n';
    std::cout << student.gradeYear << '\n';

}

void displayShop(ShoppingMall shop){
    std::cout << "--------------------\n";
    std::cout << "Item: " << shop.item << '\n';
    std::cout << "Brand:  " <<  shop.brand << '\n';
    std::cout << "Price:  " <<  shop.price << '\n';
    std::cout << "ContainsMetal: " <<  shop.containsMetal << '\n';
    std::cout << "BatteryLife: " <<  shop.batteryLife << '\n';
}