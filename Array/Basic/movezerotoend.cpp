#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    // Place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // No non-zero elements:
    if (j == -1) return a;

    // Move the pointers i and j
    // and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = moveZeros(n, arr);
    cout << "After moving zeros to the end: ";
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}

