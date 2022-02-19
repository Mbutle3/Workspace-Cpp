#include <iostream>
using namespace std;

void swap(int *val_one, int *val_two){
    int temp_val;
    temp_val = *val_one;
    *val_one = *val_two;
    *val_two = temp_val;
}

void Straight_Selection_Sort(int input_array[], const int size){
    //Pararmetes: An array of Integer Values, The size of the array
    //Funtctionality: This method will sort an array of integers in ascending order using the Selection Sort Algorithm
    //Step 1. Program will iterate though the array of integers from 'i' (0) to the last element in the array (size - 1)
    //Step 2. We then establish a theory that the min_index is the starting element of the array
    //Step 3.Afterwards we create a new for loop starting one value ahead of 'i' called 'j'
    //Step 4.While executing we will compare the values both values at their respective positions in the loop
    //Step 5.The program will then update the min_index to point to the position of the smaller element if this condition is true
    //Step 6.Lasty after we have found the smallest element we will swap the element at i and then repeat untill the array is sorted
    int i, j;
    for (i = 0; i < size - 1; i ++)
    {
        int min_index = i;
        for (int j = i+1; j < size; j ++)

            if (input_array[j] < input_array[min_index]){
              min_index = j;
            }

        swap(&input_array[min_index], &input_array[i]);
    }
}

int main(){

        int input_array [] = {1,22,4,5,43};
        const int size = sizeof(input_array)/sizeof(input_array[0]);
        int i;
        Straight_Selection_Sort(input_array, size);
        for (i = 0; i < size; i ++){
            cout << input_array[i] << " ";
        }
return 0;
}