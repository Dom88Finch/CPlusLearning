#include <iostream>
#include <cmath>

void sortArray(int array[], int size);
int main(){


    // Sorting an array using BubbleSort

    int array[] = {3,4,6,1,3,77,3,7,44,9};
    int size = sizeof(array)/sizeof(array[0]);

    // sort reverse order 
    sortArray(array, size);

    for(int element : array){
        std::cout << element <<" \n"; 
    }

   
}

void sortArray(int array[], int size){
    int temp;
    for(int i = 0; i< size-1; i++){

        for(int j = 0; j < size -i - 1; j++){
            if(array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
             }
        }
        

    
    } 

}
