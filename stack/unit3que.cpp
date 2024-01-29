#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<pair<string, int>> deliveryQueue; // Create the queue outside the switch statement

    while (true) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string destination;
                int priority;
                cin.ignore();
                getline(cin, destination);
                cin >> priority;
                
                if (deliveryQueue.size() < 5) {
                    deliveryQueue.push({destination, priority});
                    cout << "Package added to the delivery queue." << endl;
                } else {
                    cout << "Delivery queue is full. Cannot add more packages." << endl;
                }
                break;
            }
            case 2: {
                if (!deliveryQueue.empty()) {
                    cout << "Delivered package to: " << deliveryQueue.front().first << endl;
                    deliveryQueue.pop();
                } else {
                    cout << "No packages in the delivery queue." << endl;
                }
                break;
            }
            case 3: {
                if (!deliveryQueue.empty()) {
                    cout << "Next package for delivery: " << deliveryQueue.front().first << endl;
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

