#include <iostream>
#include <queue>

using namespace std;

void generateBinarySequence(int N) {
    queue<string> binaryQueue;
    binaryQueue.push("1");

    for (int i = 0; i < N; i++) {
        string binary = binaryQueue.front();
        binaryQueue.pop();

        cout << binary << " ";

        binaryQueue.push(binary + "0");
        binaryQueue.push(binary + "1");
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;

    generateBinarySequence(N);

    return 0;
}

