#include <iostream>
using namespace std;

// To search a key to be deleted
int findElement(int arr[], int n, int key);

// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);

    if (pos == -1) {
        cout << "Element not found";
        return n;
    }

    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;
}

// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int main()
{
    int i;
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements into the array:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the element you want to delete: ";
    cin >> key;

    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Function call
    n = deleteElement(arr, n, key);

    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
//output
//Enter the number of elements in the array: 5
//Enter 5 elements into the array:
//1 2 3 4 5
//Enter the element you want to delete: 2
//Array before deletion
//1 2 3 4 5
//
//Array after deletion
//1 3 4 5
