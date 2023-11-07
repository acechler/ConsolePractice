// ConsolePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 25,14,15,9,10,12 };
    int size = 6;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "Hello World!\n";
}

