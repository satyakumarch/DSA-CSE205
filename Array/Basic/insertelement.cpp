#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int size; // Current size of the array
    int element, position;

    // Input the initial size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input array elements
    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Input the element and position to insert
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0-based index): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position. Position should be between 0 and " << size << ".\n";
    } else {
        // Shift elements to make space for the new element
        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the element at the specified position
        arr[position] = element;

        // Update the size of the array
        size++;

        // Print the updated array
        cout << "Updated array:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << std::endl;
    }

    return 0;
}
output
Enter the size of the array: 5
Enter 5 elements for the array:
Element 1: 2
Element 2: 4
Element 3: 5
Element 4: 6
Element 5: 7
Enter the element to insert: 3
Enter the position to insert (0-based index): 2
Updated array:
2 4 3 5 6 7

