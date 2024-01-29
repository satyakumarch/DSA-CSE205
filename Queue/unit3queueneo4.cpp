#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << "Queue is empty." << endl;
        return 0;
    }

    queue<int> q;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        q.push(element);
        sum += element;
    }

    double average = static_cast<double>(sum) / N;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
//output
//7
//12 25 68 97 41 29 63
//47.86
