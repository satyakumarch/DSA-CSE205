#include <iostream>

using namespace std;

void merge(int *a, int low, int high, int mid) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int leftArr[n1];
    int rightArr[n2];

    for (int i = 0; i < n1; i++) {
        leftArr[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (leftArr[i] >= rightArr[j]) {
            a[k] = leftArr[i];
            i++;
        } else {
            a[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int *a, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, high, mid);
    }
}

int main() {
    int n;
    cin >> n;

    int productIDs[n];
    for (int i = 0; i < n; i++) {
        cin >> productIDs[i];
    }

    mergeSort(productIDs, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << productIDs[i] << " ";
    }
    cout << endl;

    return 0;
}
5
1 4 2 6 4
6 4 4 2 1
