#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Package {
    string destination;
    int priority;
};

bool operator<(const Package& p1, const Package& p2) {
    return p1.priority > p2.priority;
}

int main() {
    priority_queue<Package> deliveryQueue;
    
    while (true) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Package newPackage;
                cin.ignore(); // Clear the newline character from previous input
                getline(cin, newPackage.destination);
                cin >> newPackage.priority;

                if (deliveryQueue.size() < 5) {
                    deliveryQueue.push(newPackage);
                    cout << "Package added to the delivery queue." << endl;
                } else {
                    cout << "Delivery queue is full. Cannot add more packages." << endl;
                }
                break;
            }
            case 2: {
                if (!deliveryQueue.empty()) {
                    cout << "Delivered package to: " << deliveryQueue.top().destination << endl;
                    deliveryQueue.pop();
                } else {
                    cout << "No packages in the delivery queue." << endl;
                }
                break;
            }
            case 3: {
                if (!deliveryQueue.empty()) {
                    cout << "Next package for delivery: " << deliveryQueue.top().destination << endl;
                } else {
                    cout << "No packages in the delivery queue." << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting the application." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }

    return 0;
}

