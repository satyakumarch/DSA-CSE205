#include <iostream>
#include <vector>

using namespace std;

// Definition of a Node in a Binary Search Tree (BST)
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

// Function to insert a new node into a BST
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to check if two BSTs are identical
bool areIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    if (root1 != NULL && root2 != NULL) {
        return (root1->data == root2->data) &&
               areIdentical(root1->left, root2->left) &&
               areIdentical(root1->right, root2->right);
    }

    return false;
}

int main() {
    vector<int> cityA, cityB;
    int val;

    // Input for City A
    while (cin >> val && val != -1) {
        cityA.push_back(val);
    }

    // Create BST for City A
    Node* rootA = NULL;

    for (int i = 0; i < cityA.size(); i++) {
        rootA = insert(rootA, cityA[i]);
    }

    // You can proceed with comparing rootA with the BST for City B here
    // and determine if they are identical or not.

    return 0;
}

