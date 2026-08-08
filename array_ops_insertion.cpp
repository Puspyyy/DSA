#include <iostream>

void insertElement(int arr[], int& size, int capacity, int element, int index) {
    if (size >= capacity || index < 0 || index > size) {
        std::cout << "Insertion failed: Invalid index or array is full.\n";
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    size++;
}

int main() {
    int capacity = 10;
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int element = 25;
    int index = 2;

    insertElement(arr, size, capacity, element, index);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}