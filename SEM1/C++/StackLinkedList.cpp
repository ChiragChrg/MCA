// Write a C++ program to implement Stack using Linked List

#include <iostream>
using namespace std;

typedef struct SLNODE
{
    int data;
    struct SLNODE *ptr;
} NODE;

class Stack{
    public:
        NODE *push(NODE *);
        NODE *pop(NODE *);
        void display(NODE *);
};

int main()
{
    int ch;
    Stack S;
    NODE *HEAD = NULL;

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: HEAD = S.push(HEAD);
                    break;
            case 2: HEAD = S.pop(HEAD);
                    break;
            case 3: S.display(HEAD);
                    break;
            case 4: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
    
    return 0;
}

NODE *Stack :: push(NODE *HEAD)
{
    int num;
    NODE *newNode;
    newNode = (NODE *)malloc(sizeof(NODE *));

    cout<<"Enter data: ";
    cin>>num;

    newNode -> data = num;
    newNode -> ptr = HEAD;
    HEAD = newNode;

    return HEAD;
}

NODE *Stack :: pop(NODE *HEAD)
{
    NODE *temp;

    if (HEAD == NULL)
        cout<<"Stack is Empty"<<endl;
    else{
        temp = HEAD;
        HEAD = HEAD -> ptr;
        temp -> ptr = NULL;

        cout<<"Popped element: "<<temp -> data<<endl;
        free(temp);
    }

    return HEAD;
}

void Stack :: display(NODE *HEAD)
{
    NODE *temp;

    if (HEAD == NULL)
        cout<<"Stack is empty"<<endl;
    else{
        temp = HEAD;
        while (temp -> ptr != NULL)
        {
            cout<<temp -> data<<" -> ";
            temp = temp -> ptr;
        }
        cout<<temp -> data<<endl;
    }
}