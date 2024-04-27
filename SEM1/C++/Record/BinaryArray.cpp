#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL)
     return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    
    return root;
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;

    inorderTraversal(root->left);
    cout << root->data <<"";
    inorderTraversal(root->right);
}

int main() {
    int n;
    Node* root = NULL;

    cout <<"Enter the number of elements: ";
    cin >> n;
    
    cout <<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout <<"Inorder Traversal: ";
    inorderTraversal(root);

    return 0;
}