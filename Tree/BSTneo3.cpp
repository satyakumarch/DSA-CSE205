#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node
struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
};

// Function to insert a character into the BST
TreeNode* insert(TreeNode* root, char val) {
    if (!root) {
        root = new TreeNode;
        root->val = val;
        root->left = root->right = nullptr;
        return root;
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to perform in-order traversal and print the characters
void inOrderTraversal(TreeNode* root) {
    if (!root) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

// Function to find and delete a character from the BST
TreeNode* deleteNode(TreeNode* root, char val) {
    if (!root) {
        return root;
    }

    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with only one child or no child
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children, get the inorder successor
        TreeNode* temp = root->right;
        while (temp->left) {
            temp = temp->left;
        }

        // Copy the inorder successor's content to this node
        root->val = temp->val;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

int main() {
    int N;
    cin >> N;
    vector<char> characters(N);

    for (int i = 0; i < N; i++) {
        cin >> characters[i];
    }

    char M;
    cin >> M;

    TreeNode* root = nullptr;

    for (char ch : characters) {
        root = insert(root, ch);
    }

    root = deleteNode(root, M);

    inOrderTraversal(root);
    cout << endl;

    return 0;
}

