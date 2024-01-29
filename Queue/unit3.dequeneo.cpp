#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;
    int element;
    int count = 0;
    bool isAlternate = true;

    while (true) {
        std::cin >> element;
        if (element == -1) {
            break; // Terminate input when -1 is entered
        }

        myDeque.push_back(element);
    }

    for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); ++it) {
        if (isAlternate) {
            count++;
        }
        isAlternate = !isAlternate; // Toggle between alternate and non-alternate elements
    }

    std::cout << "Number of alternate elements in the deque: " << count << std::endl;

    return 0;
}
//output
//1
//2
//3
//4
//-1
//Number of alternate elements in the deque: 2

//1
//2
//-1
//Number of alternate elements in the deque: 1
