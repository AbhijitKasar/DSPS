#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int size;

    // Accept the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Accept the elements of the array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;

    // Accept the key to be searched
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform the linear search
    int result = linearSearch(arr, size, key);

    // Display the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}