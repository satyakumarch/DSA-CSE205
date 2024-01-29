#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a node into the BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to perform post-order traversal and calculate the sum
int postOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftSum = postOrderTraversal(root->left);
    int rightSum = postOrderTraversal(root->right);
    int nodeSum = root->val;

    cout << root->val << " "; // Print post-order traversal node

    return leftSum + rightSum + nodeSum;
}

int main() {
    int n;
    cin >> n;
    TreeNode* root = NULL;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = insert(root, val);
    }

    cout << "Post-order traversal: ";
    int sum = postOrderTraversal(root);
    cout << endl << "Sum of all nodes: " << sum << endl;

    return 0;
}
8
1 2 3 5 8 10 7 9
Post-order traversal: 7 9 10 8 5 3 2 1
Sum of all nodes: 45

