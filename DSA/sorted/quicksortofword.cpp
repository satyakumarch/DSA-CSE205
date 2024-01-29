#include <iostream>
#include <string>

using namespace std;

// Partition function for Quick Sort
int partition(string names[], int low, int high) {
    string pivot = names[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (names[j] <= pivot) {
            i++;
            swap(names[i], names[j]);
        }
    }

    swap(names[i + 1], names[high]);
    return i + 1;
}

// Quick Sort algorithm
void quickSort(string names[], int low, int high) {
    if (low < high) {
        int pivot = partition(names, low, high);
        quickSort(names, low, pivot - 1);
        quickSort(names, pivot + 1, high);
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline character after N

    string names[N];

    for (int i = 0; i < N; i++) {
        getline(cin, names[i]);
    }

    quickSort(names, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
6
Chandler
Monica
Ross
Joey
Rachel
Phonebe

Chandler
Joey
Monica
Phonebe
Rachel
Ross

