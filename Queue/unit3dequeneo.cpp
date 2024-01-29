#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> elements(N);

    for (int i = 0; i < N; ++i) {
        cin >> elements[i];
    }

    // Sort elements in descending order
    sort(elements.begin(), elements.end(), greater<int>());

    // Output the sorted elements
    for (int i = 0; i < N; ++i) {
    cout << elements[i];
        if (i < N - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
//output
//3
//1 9 7
//9 7 1

//
//5
//7 5 9 6 4
//9 7 6 5 4
