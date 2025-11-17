#include <iostream>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

bool checkBST(Node* root, int minVal, int maxVal) {
    if (root == NULL)
        return true;

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return checkBST(root->left, minVal, root->data) &&
           checkBST(root->right, root->data, maxVal);
}

bool isBST(Node* root) {
    return checkBST(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = NULL;
    int values[] = {8, 3, 10, 1, 6, 4, 7, 14, 13};

    for (int val : values)  root = insert(root, val);

    if (isBST(root)) cout << "The given tree is a BST." << endl;
    else cout << "The given tree is NOT a BST." << endl;

}