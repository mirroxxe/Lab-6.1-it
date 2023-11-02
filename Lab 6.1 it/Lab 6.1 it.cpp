#include <iostream>
#include <cstdlib>
#include <ctime>

const int arraySize = 24;
const int lowerLimit = -50;
const int upperLimit = 15;

void generateRandom(int arr[], int size, int lower, int upper) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (upper - lower + 1) + lower;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int sumNegative(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void replaceNegative(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int arr[arraySize];
    srand(static_cast<unsigned>(time(0)));

    generateRandom(arr, arraySize, lowerLimit, upperLimit);
    std::cout << "Generated array: ";
    print(arr, arraySize);

    int count = countNegative(arr, arraySize);
    int sum = sumNegative(arr, arraySize);

    std::cout << "Count of negative: " << count << std::endl;
    std::cout << "Sum of negative: " << sum << std::endl;

    replaceNegative(arr, arraySize);
    std::cout << "Modified array: ";
    print(arr, arraySize);

    return 0;
}
