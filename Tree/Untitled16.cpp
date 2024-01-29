#include <iostream>

using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert an integer into the BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to search for an integer in the BST
bool search(TreeNode* root, int val) {
    if (root == nullptr) {
        return false;
    }

    if (val == root->val) {
        return true;
    } else if (val < root->val) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

int main() {
    TreeNode* root = nullptr;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        root = insert(root, val);
    }

    int key;
    cin >> key;

    if (search(root, key)) {
        cout << key << " is present in the BST" << endl;
    } else {
        cout << key << " is not present in the BST" << endl;
    }

    return 0;
}

