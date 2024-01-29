//Heap-sort using Min-heap
#include <iostream>
using namespace std;

void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] < arr[smallest]){
        smallest = left;
    }
    if (right < n && arr[right] < arr[smallest]){
        smallest = right;
    }
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

void heapSort(int arr[], int n) {
    buildMinHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        minHeapify(arr, i, 0);
    }
}

int main() {
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"\nOriginal Array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr, n);

    cout<<"\nSorted array: ";
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//output
//Enter no. of elements: 5
//Enter arr[0]: 5
//Enter arr[1]: 7
//Enter arr[2]: 1
//Enter arr[3]: 2
//Enter arr[4]: 6
//
//Original Array: 5 7 1 2 6
//
//Sorted array: 1 2 5 6 7

