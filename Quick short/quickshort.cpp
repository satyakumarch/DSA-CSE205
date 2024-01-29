//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//int temp = a;
//a = b;
//b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//int pivot = arr[low];
//int left = low + 1;
//int right = high;
//while (true) {
//while (left <= right && arr[left] <= pivot) {
//left++;
//}
//while (arr[right] > pivot) {
//right--;
//}
//if (left > right) {
//break;
//}
//swap(arr[left], arr[right]);
//}
//swap(arr[low], arr[right]);
//return right;
//}
//
//void quickSort(int arr[], int low, int high) {
//if (low < high) {
//int pivotIndex = partition(arr, low, high);
//quickSort(arr, low, pivotIndex - 1);
//quickSort(arr, pivotIndex + 1, high);
//}
//}
//
//void printArray(int arr[], int size) {
//for (int i = 0; i < size; i++) {
//cout<<arr[i]<<" ";
//}
//cout<<endl;
//}
//
//int main() {
//int n;
//cout<<"Enter no. of elements: ";
//cin>>n;
//int arr[n];
//for(int i=0; i<n;i++){
//cout<<"Enter arr["<<i<<"]: ";
//cin>>arr[i];
//}
//cout<<"\nOriginal array: ";
//printArray(arr, n);
//quickSort(arr, 0, n - 1);
//cout<<"\nSorted array: ";
//printArray(arr, n);
//return 0;
//}
//
//Enter no. of elements: 5
//Enter arr[0]: 1
//Enter arr[1]: 2
//Enter arr[2]: 3
//Enter arr[3]: 5
//Enter arr[4]: 6
//
//Original array: 1 2 3 5 6
//
//Sorted array: 1 2 3 5 6


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

