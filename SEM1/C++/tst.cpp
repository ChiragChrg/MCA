#include <iostream>
using namespace std;

typedef struct NODE {
    int data;
    struct NODE* left;
    struct NODE* right;
} BSTree;

BSTree* root;
BSTree* newnode, * cur, * ptr;

void insert() {
    int item, num;
    newnode = (BSTree*)malloc(sizeof(BSTree));
    cout << "Enter the element to insert:" << endl;
    cin >> num;
    newnode->data = num;
    item = newnode->data;
    newnode->left = NULL;
    newnode->right = NULL;
    if (root == NULL) {
        root = newnode;
    }
    else {
        cur = root;
        while (cur != NULL) {
            ptr = cur;
            if (item >= cur->data) {
                cur = cur->right;
            }
            else {
                cur = cur->left;
            }
        }
        if (ptr->data <= item) {
            ptr->right = newnode;
        }
        else {
            ptr->left = newnode;
        }
    }
}

void inorder(BSTree* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(BSTree* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(BSTree* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void display(BSTree* newnode, int level) {
    int i;
    if (newnode != NULL) {
        display(newnode->right, level + 1);
        for (i = 0; i < level; i++) {
            cout << "    ";
        }
        cout << newnode->data << endl;
        display(newnode->left, level + 1);
    }
}

int main() {
    int ch, level = 1;
    while (1) {
        cout << "\n MENU" << endl;
        cout << "1.Insert\n";
        cout << "2.Inorder\n";
        cout << "3.Preorder\n";
        cout << "4.Postorder\n";
        cout << "5.Display\n";
        cout << "6.Exit\n";
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch (ch) {
        case 1:
            insert();
            break;
        case 2:
            inorder(root);
            cout << endl;
            break;
        case 3:
            preorder(root);
            cout << endl;
            break;
        case 4:
            postorder(root);
            cout << endl;
            break;
        case 5:
            cout << "_____________________________________\n";
            display(root, level);
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}
