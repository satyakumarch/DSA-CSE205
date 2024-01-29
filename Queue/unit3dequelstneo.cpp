#include <iostream>
#include <deque>

int main() {
    int length;
    std::cin >> length;

    std::deque<int> myDeque;

    for (int i = 0; i < length; ++i) {
        int element;
        std::cin >> element;
        myDeque.push_front(element); // Insert at the front
    }

    int numToDelete;
    std::cin >> numToDelete;

    if (myDeque.empty()) {
        std::cout << -1 << std::endl; // Queue is empty
    } else {
        std::cout << "The front element is " << myDeque.front() << "." << std::endl;

        for (int i = 0; i < numToDelete; ++i) {
            myDeque.pop_front(); // Delete from the front
        }

        if (myDeque.empty()) {
            std::cout << "After deletion, the front element becomes -1." << std::endl;
        } else {
            std::cout << "After deletion, the front element becomes " << myDeque.front() << "." << std::endl;
        }
    }

    return 0;
}
//output
//5
//1 2 3 4 5
//2
//The front element is 5.
//After deletion, the front element becomes 3.


//6
//10 20 30 40 50 60
//6
//The front element is 60.
//After deletion, the front element becomes -1.
