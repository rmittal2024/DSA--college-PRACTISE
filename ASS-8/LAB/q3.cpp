#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertBST(Node* root, int val) {
    if (root == NULL) return new Node(val);
    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

Node* constructBST(int arr[], int n) {
    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        if (arr[i] != INT_MIN)
            root = insertBST(root, arr[i]);
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int maxDepth(Node* root) {
    if (root == NULL) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int minDepth(Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL) return 1 + minDepth(root->right);
    if (root->right == NULL) return 1 + minDepth(root->left);
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

Node* search(Node* root, int key) {
    if (!root || root->val == key) return root;
    if (key < root->val) return search(root->left, key);
    return search(root->right, key);
}

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->val)
        root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else {
        
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
       
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        Node* successor = findMin(root->right);
        root->val = successor->val;
        root->right = deleteNode(root->right, successor->val);
    }
    return root;
}

int main() {
    int arr[] = {10, 5, 20, 3, 8, 15, 25, INT_MIN, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = constructBST(arr, n);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Max Depth: " << maxDepth(root) << endl;
    cout << "Min Depth: " << minDepth(root) << endl;

    int key = 8;
    Node* target = search(root, key);
    if (target) cout << "Node " << key << " found" << endl;
    else cout << "Node " << key << " not found" << endl;

    cout << "\nDeleting node with value 5" << endl;
    root = deleteNode(root, 5);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;
}