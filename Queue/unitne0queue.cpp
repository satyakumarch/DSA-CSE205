#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cout<<"Enter the number:"<<endl;
    cin >> N;
    queue<int> myQueue;
   cout<<"Enter "<<N<<" elements"<<endl;
    for (int i = 0; i < N; i++) {
    	
        int element;
        
        cin >> element;
        myQueue.push(element);
    }

    int sum = 0;

    while (!myQueue.empty()) {
        sum += myQueue.front();
        myQueue.pop();
    }

    if (sum == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "The sum of the input  element is: "<<sum << endl;
    }

    return 0;
}
//output
//5
//1 2 3 4 5
//15
Enter the number:
5
Enter 5 elements
1 2 3 5 6
The sum of the input  element is: 17
