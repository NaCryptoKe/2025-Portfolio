#include <iostream>

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int averageOfArray(int arr[], int n) {
    int sum = sumOfArray(arr, n);
    return sum / n;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The average of the array elements: " << averageOfArray(arr, n);

    return 0;
}