#include <iostream>
#include <string>

using namespace std;

// Partition function for Quick Sort
int partition(string arr[], int low, int high) {
    string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort algorithm
void quickSort(string arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    int N;
    cin >> N;

    string years[N];

    for (int i = 0; i < N; i++) {
        cin >> years[i];
    }

    quickSort(years, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << years[i] << " ";
    }
    cout << endl;

    return 0;
}
output
5
2014 2009 2000 1997 1865
1865 1997 2000 2009 2014
