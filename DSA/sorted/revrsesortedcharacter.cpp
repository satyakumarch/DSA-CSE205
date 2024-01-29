#include <iostream>
#include <cstring>

using namespace std;

const int MAX_Char_LENGTH = 30;

void merged(char arr[][MAX_Char_LENGTH], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char leftArr[n1][MAX_Char_LENGTH];
    char rightArr[n2][MAX_Char_LENGTH];

    for (int i = 0; i < n1; i++) {
        strcpy(leftArr[i], arr[left + i]);
    }
    for (int i = 0; i < n2; i++) {
        strcpy(rightArr[i], arr[mid + 1 + i]);
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (strcmp(leftArr[i], rightArr[j]) >= 0) {
            strcpy(arr[k], leftArr[i]);
            i++;
        } else {
            strcpy(arr[k], rightArr[j]);
            j++;
        }
        k++;
    }

    while (i < n1) {
        strcpy(arr[k], leftArr[i]);
        i++;
        k++;
    }

    while (j < n2) {
        strcpy(arr[k], rightArr[j]);
        j++;
        k++;
    }
}

void mergeSort(char arr[][MAX_Char_LENGTH], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merged(arr, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;

    char characters[n][MAX_Char_LENGTH];
    for (int i = 0; i < n; i++) {
        cin >> characters[i];
    }

    mergeSort(characters, 0, n - 1);

    cout << "Sorted Characters:";
    for (int i = n - 1; i >= 0; i--) {
        cout << " " << characters[i];
    }
    cout << endl;

    return 0;
}
output
5
A s D e b
Sorted Characters: A D b e s
