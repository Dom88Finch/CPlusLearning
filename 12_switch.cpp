#include <iostream>

int main()  {

    // switch = alternatibe to using many "else if" statements
    //          to compare one value aganist matching cases


    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch ((month)){
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        
        default:
            std::cout << "Invalid Month";
            break;

    }



    char grade;
    std::cout << "Enter your letter grade (A-E): ";
    std::cin >> grade;

    switch (grade){
        case 'A':
            std::cout <<" Congratulations";
            break;
        case 'B':
            std::cout <<" Congratulations";
            break;
        case 'C':
            std::cout <<" Pass";
            break;
        case 'D':
            std::cout <<" Revise more";
            break;
        case 'E':
            std::cout <<" Failed. Please contact your supervisor";
            break;
        case 'F':
            std::cout <<" Attend after school lessons";
            break;
        case 'U':
            std::cout <<" Catastrophe!!!";
            break;
        
        default:
            std::cout << "Invalid grade. Please try again";
            break;
    }



    return 0;
}4
