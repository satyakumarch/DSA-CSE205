  #include <iostream>
#include <climits>

using namespace std;

int secondSmallest(int arr[], int n) {
    if (n < 2)
        return -1;
    
    int small = INT_MAX;
    int second_small = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small;
}

int secondLargest(int arr[], int n) {
    if (n < 2)
        return -1;
    
    int large = INT_MIN;
    int second_large = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large;
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

    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;

    return 0;
} 
//Enter the number of elements: 5
//Enter 5 elements: 1 2 4 5 3
//Second smallest is 2
//Second largest is 4


