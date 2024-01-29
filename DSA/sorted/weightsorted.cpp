#include <iostream>

using namespace std;

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    int N;
    cin >> N;

    int weights[N];

    for (int i = 0; i < N; i++) {
        cin >> weights[i];
    }

    quickSort(weights, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << weights[i] << " ";
    }
    cout << endl;

    return 0;
}
output
3
120 60 80
60 80 120
