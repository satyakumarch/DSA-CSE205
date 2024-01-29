#include <iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter the element you want to search: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    return 0;
}
output
Enter the number of elements in the array: 5
Enter 5 elements in sorted order:
1 2 3 4 5
Enter the element you want to search: 5
Element is present at index 4
