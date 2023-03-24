#include <iostream>
#include <cmath>

void showBalance(double balance);
double withdrawal(double value, double balance);
double deposit(double deposit, double balance);
int main() {
    /*
    Banking Program:
    requirements:
    - deposit money
    - withdraw money 
    - show balance
    */
   
    double balance = 100;
    int option;
    std::cout << "Welcome to the bank\n Please select an option \n";
    std::cout << "1) show balance :\n ";
    std::cout << "2) withdraw \n  ";
    std::cout << "3) deposit \n";
    std::cout << "4) exit: \n ";
    do{
        std::cout << "--------------------------------\n";
        std::cout << "Please select an option (1-4): ";
        std::cin >> option;

        // the following 2 lines used to clear our input buffer so that
        // we dont loop continuously if an invalid input is entered
        std::cin.clear();
        fflush(stdin);

        switch (option){
            case 1:
                showBalance(balance);
                break;

            case 2:
                double withdrawalAmmount;
                std::cout << "please state the withdrawal ammount: (Available balance is " << balance<< "): " ;
                std::cin >> withdrawalAmmount;
                balance = withdrawal(withdrawalAmmount,balance);
                std::cout << "New balance is: " << balance; 
                break;
            
            case 3:
                double depositAmmount;
                std::cout << "please state the Deposit ammount: (Available balance is " << balance<< "): ";
                std::cin >> depositAmmount;
                balance = deposit(depositAmmount ,balance);
                std::cout << "New balance is: " << balance; 
                break;
            case 4:
                break;
            default:
                break;
            }
    }while (option !=4);

    return 0;
}


void showBalance(double balance){
    // show current balance
     std::cout << "Current banance is:  " << balance;

    
}

double withdrawal(double value, double balance){
    // withdraw money from current balance

    double newBalance;
    if ((balance - value) > 0){
        newBalance = balance - value;
    }
    else{
        std::cout << "Insufficient banance\n";
        newBalance = balance;
    }
    std::cout << "Current is: " << newBalance <<'\n';

return newBalance;

}

double deposit(double deposit, double balance){
    // depsoit money
    
    balance += deposit;
    std::cout << "Current is: " << balance <<'\n';
   return balance;

}


