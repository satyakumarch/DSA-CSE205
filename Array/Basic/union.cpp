#include <iostream>
#include <vector>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0; // Pointers
    vector<int> Union; // Union vector

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) { // Case 1 and 2
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } else { // Case 3
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) { // If any element left in arr1
        if (Union.empty() || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) { // If any elements left in arr2
        if (Union.empty() || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main() {
    int n, m;

    cout << "Enter the number of elements in arr1: ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements for arr1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in arr2: ";
    cin >> m;
    int arr2[m];
    cout << "Enter " << m << " elements for arr2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> Union = FindUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: " << endl;
    for (auto &val : Union) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

