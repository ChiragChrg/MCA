// Ordered Linked List

# include <iostream>
using namespace std;

typedef struct ONODE {
    int data;
    struct ONODE *ptr;
} NODE;

class OList {
    public:
        NODE *insertOrder(NODE *);
        NODE *reverseOrder(NODE *);
        void display(NODE *);
};

int main(){
    int ch;
    OList OL;
    NODE *HEAD = NULL;

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Insert in Order";
        cout<<"\n2. Reverse List";
        cout<<"\n3. Display ";
        cout<<"\n4.Exit\n";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: HEAD = OL.insertOrder(HEAD);
                    break;
            case 2: HEAD = OL.reverseOrder(HEAD);
                    break;
            case 3: OL.display(HEAD);
                    break;
            case 4: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
}

NODE *OList::insertOrder(NODE *HEAD){
    NODE * newNode, *temp1, *temp2;
    int num;

    cout<<"Enter the Data : ";
    cin>>num;

    newNode = (NODE *)malloc(sizeof(NODE *));
    newNode -> data = num;
    newNode -> ptr = NULL;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        if(newNode -> data < HEAD -> data){
            newNode -> ptr = HEAD;
            HEAD = newNode;
        }else{
            temp2 = HEAD;
            while(temp2 != NULL && newNode -> data > temp2 -> data){
                temp1 = temp2;
                temp2 = temp2 -> ptr;
            }

            temp1 -> ptr = newNode;
            newNode -> ptr = temp2;
        }
    }
    return HEAD;
}

NODE *OList::reverseOrder(NODE *HEAD){
    NODE *curr, *prev;
    int num;

    if(HEAD == NULL)
        cout<<"List is Empty!";
    else{
        curr = HEAD;
        HEAD = HEAD -> ptr;
        prev = HEAD -> ptr;
        curr -> ptr = NULL;

        while(prev != NULL){
            HEAD -> ptr = curr;
            curr = HEAD;
            HEAD = prev;
            prev = prev -> ptr;
        }
        HEAD -> ptr = curr;

        cout<<"List is Reversed!"<<endl;
    }
    return HEAD;
}

void OList::display(NODE *HEAD){
    NODE *temp;

    if(HEAD == NULL)
        cout<<"List is Empty!"<<endl;
    else{
        temp = HEAD;
        while(temp -> ptr != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> ptr;
        }
        cout<<temp -> data<<endl;
    }
}