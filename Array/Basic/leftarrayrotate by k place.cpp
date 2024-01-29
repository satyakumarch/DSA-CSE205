#include <iostream>

using namespace std;

void Rotatetoright(int arr[], int n, int k) {
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    
    int temp[k];
    for (int i = n - k; i < n; i++) {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k (number of rotations): ";
    cin >> k;

    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to the right: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//Enter the number of elements: 5
//Enter 5 elements: 1 2 3 4 6
//Enter the value of k (number of rotations): 2
//After Rotating the elements to the right:
//4 6 1 2 3
