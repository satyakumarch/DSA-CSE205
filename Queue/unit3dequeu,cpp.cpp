#include <iostream>
#include <deque>

int main() {
    int N;
    std::cin >> N;

    std::deque<int> myDeque;

    for (int i = 0; i < N; ++i) {
        int element;
        std::cin >> element;
        myDeque.push_back(element); // Insert elements into the deque
    }

    // Reverse the deque
    for (int i = 0; i < N / 2; ++i) {
        std::swap(myDeque[i], myDeque[N - i - 1]);
    }

    // Output the reversed elements
    for (int i = 0; i < N; ++i) {
        std::cout << myDeque[i];
        if (i < N - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
//output
//10
//7 8 5 3 6 2 5 9 4 1
//1 4 9 5 2 6 3 5 8 7


//
//5
//12 59 -91 62 48
//48 62 -91 59 12
