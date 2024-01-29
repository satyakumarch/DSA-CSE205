#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> & a, int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2^a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; // XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main() {
    int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;

    vector<int> a(N - 1); // The array size is N - 1 since one number is missing
    cout << "Enter " << N - 1 << " elements of the array: ";
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}
//output
//Enter the number of elements in the array: 6
//Enter 5 elements of the array: 1 2 3 5 6
//The missing number is: 4
