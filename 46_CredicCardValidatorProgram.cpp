#include <iostream>
#include <cmath>
#include <list>
#include<stdio.h>




// void doubleEverySecondDigit(int number[], int size, int sumValue);
// int main() {

//     /*
//     Application - Credit Card Validator
//     objective: algorithm is used to check whether a credit card 
//                 number is valid or not

//     requirements: Use Luhn Algorithm 
//     1. Double every second digit from right to left
//         (If doubled number is 2 digts, split them)
//     2. Add all single digits from step 1
//     3. Add all odd numbered digits from right to left
//     4. Sum results from steps 2 & 3
//     5. If step 4 is divisible by 10, # is valid
//     - 
//     - 
//     - 
//     */

//     // int creditCardNumber[16] = {1,2,3,4,5,6,7,8,8,7,6,5,4,3,2,1};
//     int creditCardNumber[16] = {6,0,1,1,0,0,0,9,9,0,1,3,9,4,2,4};
//     int size = sizeof(creditCardNumber)/sizeof(creditCardNumber[0]);
//     int sumValue;

//     doubleEverySecondDigit(creditCardNumber, size, sumValue);
//     std::cout << sizeof(creditCardNumber)/sizeof(creditCardNumber[0]);
    
//     // for(int n : creditCardNumber){
//     //     // std::cout << n << "\n";
//     //     sum+= n;
//     // }
//     int sum;
//     for(int i = size-1; i > 0; i-=2){
//         sum += creditCardNumber[i];
//     }
    
//     std::cout << "\n SUm of our array: " << sum; 
//     // std::cout << "\nSUm value: " << sumValue;
//     return 0;
// }

// // void addAllOddNumberedDigits(int number[], int size){

    
// //     for(int i=size-1; i >=0; i-=2){

// //     }
    
// // }
// void doubleEverySecondDigit(int number[], int size, int sumValue){
//     int temp;
//     std::list<int> keepTrack;

//     int sizeOfTemp; 

//     for(int i=size; i >=0; i-=2){

//         // std::cout << i << '\n';
//         temp = number[i] * 2;
//         // std::cout << i <<": " << number[i] << " " << temp  <<'\n';
        
//         number[i] = temp;
//         sizeOfTemp = trunc(log10(temp)) + 1;
//         std::cout << "\n size :" << sizeOfTemp <<'\n';
//         std::cout << "our array: "<< temp <<'\n';
//         if(sizeOfTemp == 2){
//             int indexZero = temp % 10;
//             int tempIndex =  temp / 10;
//             int indexOne = tempIndex % 10;
//             keepTrack.push_back(indexOne);
//             keepTrack.push_back(indexZero);
//             // std::cout << indexOne << " : "<< indexZero <<'\n'; 
//             }  
//         else{
//             keepTrack.push_back(temp);
//         }

//     }
//     int doubledArray[keepTrack.size()];
//     std::copy(keepTrack.begin(), keepTrack.end(), doubledArray);
//     // std::cout << doubledArray << '\n';
//     int tempSum = 0;
//     for(int i = 0; i < sizeof(doubledArray)/sizeof(doubledArray[0]); i++){
//         std::cout << doubledArray[i] << '\n';
//         tempSum = doubledArray[i] + tempSum;
//         std::cout << tempSum << '\n';
//         // std::cout << doubledArray[i] + doubledArray[i] << '\n\n';
        
//         // tempSum = tempSum + doubledArray[0];
//         // std::cout << tempSum << '\n\n';

//     }
//     std::cout << "Our summed value is: " << sumValue; 
// }
// // }

//         // std::cout << i <<": " << number[i] << " " << temp <<'\n';
   
//     // for (auto&& e : keepTrack){
//     //     std::cout << "New values" << e << " ";
//     // }
//     // print(keepTrack);
//     // for(int salary : keepTrack){
//     //     std::cout << salary << "\n";
        
//     // }
//     // int doubledArray[keepTrack.size()];
//     // std::copy(keepTrack.begin(), keepTrack.end(), doubledArray);
 
//     // for (int i : doubledArray){
//     //     std::cout << i << '\n';
//     // }
//     // } std::cout << std::quoted(e) << ' ';
//     // std::cout << keepTrack;

// // }

// */