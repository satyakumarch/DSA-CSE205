#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> ticketQueue;

    for (int i = 0; i < N; i++) {
        int ticket;
        cin >> ticket;
        ticketQueue.push(ticket);
    }

    stack<int> reversedTickets;

    for (int i = 0; i < K; i++) {
        reversedTickets.push(ticketQueue.front());
        ticketQueue.pop();
    }

    while (!reversedTickets.empty()) {
        cout << reversedTickets.top() << " ";
        reversedTickets.pop();
    }

    while (!ticketQueue.empty()) {
        cout << ticketQueue.front() << " ";
        ticketQueue.pop();
    }

    cout << endl;

    return 0;
}
5
1 2 3 4 5
1
2 3 4 5 1
