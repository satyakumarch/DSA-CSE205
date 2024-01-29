#include <iostream>
#include <queue>

using namespace std;

// Definition of a Node in a Binary Tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

int main() {
    int rootValue;
    cin >> rootValue;

    // Create the root node
    Node* root = new Node(rootValue);

    // Build the binary tree
    queue<Node*> q;
    q.push(root);

    bool hasDuplicates = false;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftValue, rightValue;
        cin >> leftValue >> rightValue;

        if (leftValue != -1) {
            current->left = new Node(leftValue);
            q.push(current->left);
        }

        if (rightValue != -1) {
            current->right = new Node(rightValue);
            q.push(current->right);
        }
    }

    // Checking for duplicates
    // (You can insert your duplicate-checking logic here)

    if (hasDuplicates) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
//output
//1
//20
//3
//-1
//4
//-1
//-1
//-1
//-1
//No
