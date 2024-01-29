#include <iostream>

using namespace std;

int n;

void mergesort(int[], int, int);
void merge(int[], int, int, int);
void display(int[], int);


int main()
{
    cout<<"Enter no. of elements: ";
    cin>>n;
    int a[n];
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter element a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"\nOriginal array: ";
    display(a,n);
    cout<<endl;
    mergesort(a,0,n-1);
    cout<<"\nSorted array: ";
    display(a,n);
    cout<<endl;
    return 0;
}

void mergesort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid = low+(high-low)/2;
        mergesort(a, low, mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[], int beg, int mid, int last){
    int lindex, temp[n], tempindex, rindex;
    lindex = beg;
    rindex = mid+1;
    tempindex = beg;
    while((lindex <= mid) && (rindex <= last)){
        if(a[lindex] < a[rindex]){
            temp[tempindex] = a[lindex];
            lindex = lindex + 1;
        }
        else{
            temp[tempindex] = a[rindex];
            rindex = rindex + 1;
        }
        tempindex = tempindex + 1;
    }
    while(lindex <= mid){
        temp[tempindex++] = a[lindex++];
    }
    while(rindex <= last){
        temp[tempindex++] = a[rindex++];
    }
    for(int i=beg; i<=last;i++){
        a[i] = temp[i];
    }
}

void display(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}
//Enter no. of elements: 5
//
//Enter element a[0]: 4
//Enter element a[1]: 12
//Enter element a[2]: 65
//Enter element a[3]: 25
//Enter element a[4]: 85
//
//Original array: 4 12 65 25 85
//
//Sorted array: 4 12 25 65 85
