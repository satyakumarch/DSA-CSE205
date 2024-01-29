#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    map<int, int> freq;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        freq[arr2[i]]++;
    for (auto &it : freq)
        Union.push_back(it.first);
    return Union;
}

int main() {
    int n, m;
    cout << "Enter the size of arr1: ";
    cin >> n;
    
    int arr1[n];
    cout << "Enter the elements of arr1: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter the size of arr2: ";
    cin >> m;
    
    int arr2[m];
    cout << "Enter the elements of arr2: ";
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}

//output
//Enter the size of arr1: 5
//Enter the elements of arr1: 1 2 3 4 5
//Enter the size of arr2: 4
//Enter the elements of arr2: 5 6 7 8
//Union of arr1 and arr2 is 
//1 2 3 4 5 6 7 8 









