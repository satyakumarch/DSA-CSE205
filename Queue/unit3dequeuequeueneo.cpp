#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;
    int element;

    while (true) {
        std::cin >> element;
        if (element == -1) {
            break; // Terminate input when -1 is entered
        }

        myDeque.push_back(element);
    }

    if (myDeque.empty()) {
        std::cout << "Deque is empty." << std::endl;
    } else {
        int maximum = myDeque.front(); // Initialize maximum with the first element

        for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); ++it) {
            if (*it > maximum) {
                maximum = *it; // Update maximum if a larger element is found
            }
        }

        std::cout << "Maximum element: " << maximum << std::endl;
    }

    return 0;
}
//output
//1
//2
//3
//4
//-1
//Maximum element: 4
