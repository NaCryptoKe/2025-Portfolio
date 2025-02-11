#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/**
 * @brief Entry point of the program.
 * 
 * This function initializes an array of integers, prints the original array,
 * reverses the array, and then prints the reversed array.
 * 
 * The size of the array is determined using the expression `sizeof(arr) / sizeof(arr[0])`.
 * - `sizeof(arr)` returns the total size in bytes of the array `arr`.
 * - `sizeof(arr[0])` returns the size in bytes of the first element of the array.
 * By dividing the total size of the array by the size of one element, we get the number of elements in the array.
 */
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // this is used for getting the size of the array, and we divide it by sizeof(arr[0]) to get the number of elements in the array


    cout << "Original array: ";
    printArray(arr, n);

    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}