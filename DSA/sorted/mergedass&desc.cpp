#include <iostream>
#include <algorithm>

using namespace std;

void merge(int arr[], int temp[], int left, int right, int mid) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];
    int leftFreq[n1], rightFreq[n2];

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
        leftFreq[i] = temp[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
        rightFreq[i] = temp[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftFreq[i] > rightFreq[j] || (leftFreq[i] == rightFreq[j] && leftArr[i] < rightArr[j])) {
            arr[k] = leftArr[i];
            temp[k] = leftFreq[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            temp[k] = rightFreq[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        temp[k] = leftFreq[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        temp[k] = rightFreq[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int temp[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, temp, left, mid);
        mergeSort(arr, temp, mid + 1, right);

        merge(arr, temp, left, right, mid);
    }
}

int main() {
    int n;
    cout<<"Enter n element:";
    cin >> n;

    int arr[n];
    int temp[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
      
        temp[i] = 0;
    }

    sort(arr, arr + n);

    int currentFreq = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentFreq++;
        } else {
            temp[i - 1] = currentFreq;
            currentFreq = 1;
        }
    }
    temp[n - 1] = currentFreq;

    mergeSort(arr, temp, 0, n - 1);

    cout << "Output:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
Enter n element:5
45 65 25 85 13
Output: 13 25 45 65 85
