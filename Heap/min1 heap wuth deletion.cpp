   //Min-heap with deletion
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

int deleteMin(int arr[], int &n) {
    if (n <= 0) {
        cout << "Heap is empty!";
        return -1;
    }
    int root = arr[0];
    arr[0] = arr[n-1];
    n--;
    minHeapify(arr, n, 0);
    return root;
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
    cout << endl;
    buildMinHeap(arr, n);
    cout<<"\nMin Heap: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int delitem = deleteMin(arr, n);
    if (delitem != -1) {
        cout<<"\nMinimum element deleted: "<<delitem<<endl;
    }
    cout << "\nMin Heap after deletion: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//output
//Enter no. of elements: 5
//Enter arr[0]: 1
//Enter arr[1]: 2
//Enter arr[2]: 8
//Enter arr[3]: 5
//Enter arr[4]: 4
//
//Original Array: 1 2 8 5 4
//
//Min Heap: 1 2 8 5 4
//
//Minimum element deleted: 1
//
//Min Heap after deletion: 2 4 8 5
