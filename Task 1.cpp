#include <iostream>

int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the size of the array (n): ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sum = summation(arr, n);
    int max = maximum(arr, n);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Maximum: " << max << std::endl;

    delete[] arr;

    return 0;
}
