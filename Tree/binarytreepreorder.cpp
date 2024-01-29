#include <iostream>
#include <vector>

using namespace std;

// Definition of a Node in a Binary Tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

// Function to build a binary tree from an array
Node* buildTree(vector<int>& values, int& index) {
    if (index >= values.size() || values[index] == -1) {
        index++;
        return NULL;
    }

    Node* root = new Node(values[index]);
    index++;

    root->left = buildTree(values, index);
    root->right = buildTree(values, index);

    return root;
}

// Function to perform preorder traversal and compare two binary trees
bool areIdentical(Node* root1, Node* root2) {
    if (!root1 && !root2) {
        return true;
    }

    if (!root1 || !root2 || root1->data != root2->data) {
        return false;
    }

    return areIdentical(root1->left, root2->left) && areIdentical(root1->right, root2->right);
}

int main() {
    int n1, n2;
    cin >> n1;

    vector<int> values1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> values1[i];
    }

    cin >> n2;

    vector<int> values2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> values2[i];
    }

    int index1 = 0, index2 = 0;
    Node* root1 = buildTree(values1, index1);
    Node* root2 = buildTree(values2, index2);

    if (areIdentical(root1, root2)) {
        cout << "The two binary trees are identical." << endl;
    } else {
        cout << "The two binary trees are not identical." << endl;
    }

    return 0;
}
output
5
10 5 15 2 8
5
10 5 15 2 8
The two binary trees are identical.

