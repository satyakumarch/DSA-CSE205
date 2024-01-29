#include <iostream>
#include <iomanip>

using namespace std;

// Partition function for Quick Sort
int partition(float arr[], int low, int high) {
    float pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort algorithm
void quickSort(float arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    int N;
    cin >> N;

    float GPAs[N];

    for (int i = 0; i < N; i++) {
        cin >> GPAs[i];
    }

    quickSort(GPAs, 0, N - 1);

    cout << fixed << setprecision(1); // Set precision to 1 decimal place

    for (int i = 0; i < N; i++) {
        cout << GPAs[i] << " ";
    }
    cout << endl;

    return 0;
}

4
5.2 3.6 4.6 2.1
5.2 4.6 3.6 2.1
