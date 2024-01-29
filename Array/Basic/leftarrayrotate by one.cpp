#include <iostream>

using namespace std;

void solve(int arr[], int n) {
    int temp = arr[0]; // Storing the first element of the array in a variable
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp; // Assigning the value of the variable at the last index
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}
output
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5
2 3 4 5 1
