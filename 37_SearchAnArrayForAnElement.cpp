#include <iostream>
#include <cmath>

int searchArray(int array[], int size, int element);
int main() {



    // searching our array 
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    std::cout << "Found your number at index = " << index;
    return 0;
}

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    
    }
    // -1 stands for not found
    return -1;
}