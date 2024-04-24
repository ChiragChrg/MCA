#include <iostream>
using namespace std;

typedef struct BNODE{
    int data;
    struct BNODE *left;
    struct BNODE *right;
} NODE;

class BTList{
    public:
        NODE *insert(NODE *);
        void inorder(NODE *);
        void preorder(NODE *);
        void postorder(NODE *);
        void display(NODE *, int);
};

int main(){
    int ch, level = 1;
    BTList BT;
    NODE *ROOT = NULL;

    while (true){
        cout<<"\n--- MENU ---"<<endl;
        cout<<"1. Insert\n";
        cout<<"2. Inorder\n";
        cout<<"3. Preorder\n";
        cout<<"4. Postorder\n";
        cout<<"5. Display\n";
        cout<<"6. Exit\n";

        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch){
        case 1:
            ROOT = BT.insert(ROOT);
            break;
        case 2:
            cout<<"\n--- In-Order Traversal ---\n";
            BT.inorder(ROOT);
            cout<<endl;
            break;
        case 3:
            cout<<"\n--- Pre-Order Traversal ---\n";
            BT.preorder(ROOT);
            cout<<endl;
            break;
        case 4:
            cout<<"\n--- Post-Order Traversal ---\n";
            BT.postorder(ROOT);
            cout<<endl;
            break;
        case 5:
            cout<<"\n--- Binary Tree ---\n";
            BT.display(ROOT, level);
            break;
        case 6:
            cout<<"Exiting Program...";
            exit(0);
        default:
            cout<<"Invalid Choice!";
            break;
        }
    }
    return 0;
}

NODE *BTList::insert(NODE *ROOT){
    int item, num;
    NODE *newNode, *cur, *ptr;

    newNode = (NODE *)malloc(sizeof(NODE));
    cout<<"Enter the element to insert : ";
    cin>>num;

    newNode -> data = num;
    newNode -> left = NULL;
    newNode -> right = NULL;
    item = newNode -> data;

    if (ROOT == NULL)
        ROOT = newNode;
    else{
        cur = ROOT;
        while (cur != NULL){
            ptr = cur;

            if (item >= cur -> data)
                cur = cur -> right;
            else
                cur = cur -> left;
        }

        if (item >= ptr -> data)
            ptr -> right = newNode;
        else
            ptr -> left = newNode;
    }

    return ROOT;
}

void BTList ::inorder(NODE *ROOT){
    if (ROOT == NULL) return;

    inorder(ROOT -> left);
    cout<<ROOT -> data<<" ";
    inorder(ROOT -> right);
}

void BTList ::preorder(NODE *ROOT){
    if (ROOT == NULL) return;

    cout<<ROOT -> data<<" ";
    preorder(ROOT -> left);
    preorder(ROOT -> right);
}

void BTList ::postorder(NODE *ROOT){
    if (ROOT == NULL) return;

    postorder(ROOT -> left);
    postorder(ROOT -> right);
    cout<<ROOT -> data<<" ";
}

void BTList ::display(NODE *newNode, int level){
    int i;
    if (newNode == NULL) return;

    display(newNode -> right, level + 1);
    for (i = 0; i < level; i++)
        cout<<"    ";

    cout<<newNode -> data<<endl;
    display(newNode -> left, level + 1);
}
