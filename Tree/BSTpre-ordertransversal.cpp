#include <iostream>

using namespace std;

// Definition for a binary tree node
struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a character into the BST
TreeNode* insert(TreeNode* root, char val) {
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

// Function to perform in-order traversal and print the characters
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

// Function to find and delete a character from the BST
TreeNode* deleteNode(TreeNode* root, char val) {
    if (root == nullptr) {
        return root;
    }

    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children, get the inorder successor
        TreeNode* temp = root->right;
        while (temp->left != nullptr) {
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
    char M;
    cin.ignore(); // Ignore newline character from previous input
    TreeNode* root = nullptr;

    for (int i = 0; i < N; i++) {
        char val;
        cin >> val;
        root = insert(root, val);
    }

    cin.ignore(); // Ignore newline character
    cin >> M;

    root = deleteNode(root, M);

    inOrderTraversal(root);
    cout << endl;

    return 0;
}

