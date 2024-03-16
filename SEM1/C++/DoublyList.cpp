// Doubly Linked List

# include <iostream>
using namespace std;

typedef struct DNODE {
    int data;
    struct DNODE *left;
    struct DNODE *right;
} NODE;

class DList {
    public:
        NODE *insertBegin(NODE *);
        NODE *insertEnd(NODE *);
        NODE *insertPos(NODE *, int);
        NODE *deleteBegin(NODE *);
        NODE *deleteEnd(NODE *);
        NODE *deletePos(NODE *, int);
        void display(NODE *);
};

int main(){
    int ch, pos;
    DList DL;
    NODE *HEAD = NULL;

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Insert Begin \n2. Insert End \n3. Insert at Position";
        cout<<"\n4. Delete Begin \n5. Delete End \n6. Delete from Position";
        cout<<"\n7. Display \n8.Exit\n";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: HEAD = DL.insertBegin(HEAD);
                    break;
            case 2: HEAD = DL.insertEnd(HEAD);
                    break;
            case 3: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = DL.insertPos(HEAD, pos);
                    break;
            case 4: HEAD = DL.deleteBegin(HEAD);
                    break;
            case 5: HEAD = DL.deleteEnd(HEAD);
                    break;
            case 6: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = DL.deletePos(HEAD, pos);
                    break;
            case 7: DL.display(HEAD);
                    break;
            case 8: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
}

NODE *DList::insertBegin(NODE *HEAD){
    NODE * newNode;
    int num;

    cout<<"Enter the Data : ";
    cin>>num;

    newNode = (NODE *)malloc(sizeof(NODE *));
    newNode -> data = num;
    newNode -> left = NULL;
    newNode -> right = NULL;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        newNode -> right = HEAD;
        HEAD -> left = newNode;
        HEAD = newNode;
    }
    return HEAD;
}

NODE *DList::insertEnd(NODE *HEAD){
    NODE *newNode, *temp;
    int num;

    cout<<"Enter the Data : ";
    cin>>num;

    newNode = (NODE *)malloc(sizeof(NODE *));
    newNode -> data = num;
    newNode -> left = NULL;
    newNode -> right = NULL;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        temp = HEAD;
        while(temp -> right != NULL){
            temp = temp -> right;
        }

        temp -> right = newNode;
        newNode -> left = temp;
    }
    return HEAD;
}

NODE *DList::insertPos(NODE *HEAD, int pos){
    NODE *newNode, *temp, *temp1, *temp2;
    int num, i, count = 0;

    temp = HEAD;
    while(temp -> right != NULL){
        count++;
        temp = temp -> right;
    }
    count++;

    if(pos > count)
        cout<<"Invalid Position!"<<endl;
    else{
        cout<<"Enter the Data : ";
        cin>>num;

        newNode = (NODE *)malloc(sizeof(NODE *));
        newNode -> data = num;
        newNode -> left = NULL;
        newNode -> right = NULL;

        if(pos == 0 && HEAD == NULL)
            HEAD = newNode;
        else if(pos == 0){
            newNode -> right = HEAD;
            HEAD -> left = newNode;
            HEAD = newNode;
        }else{
            temp1 = temp2 = HEAD;
            for(i=0; i<pos; i++){
                temp1 = temp2;
                temp2 = temp2 -> right;
            }

            temp1 -> right = newNode;
            newNode -> left = temp1;
            newNode -> right = temp2;
            temp2 -> left = newNode;
        }
    }
    return HEAD;
}

NODE *DList::deleteBegin(NODE *HEAD){
    NODE *temp;

    if(HEAD == NULL)
        cout<<"List is Empty!";
    else{
        temp = HEAD;
        HEAD = HEAD -> right;
        HEAD -> left = NULL;
        temp -> right = NULL;

        cout<<"Deleted Node : "<<temp -> data<<endl;
        free(temp);
    }
    return HEAD;
}

NODE *DList::deleteEnd(NODE *HEAD){
    NODE *temp1, *temp2;

    if(HEAD == NULL)
        cout<<"List is Empty!";
    else if(HEAD -> right == NULL){
        temp1 = HEAD;
        HEAD = NULL;

        cout<<"Deleted Node : "<<temp1 -> data<<endl;
        free(temp1);
    }
    else{
        temp1 = temp2 = HEAD;
        while(temp2 -> right != NULL){
            temp1 = temp2;
            temp2 = temp2 -> right;
        }

        temp1 -> right = NULL;
        temp2 -> left = NULL;
        cout<<"Deleted Node : "<<temp2 -> data<<endl;
        free(temp2);
    }
    return HEAD;
}

NODE *DList::deletePos(NODE *HEAD, int pos){
    NODE *temp, *temp1, *temp2;
    int i, count = 0;

    temp = HEAD;
    while(temp != NULL){
        count++;
        temp = temp -> right;
    }

    if(pos >= count)
        cout<<"Invalid Position!"<<endl;
    else{
        if(HEAD == NULL)
            cout<<"List is Empty!"<<endl;
        else if(pos == 0 && HEAD -> right == NULL){
            temp1 = HEAD;
            HEAD = NULL;

            cout<<"Deleted Node : "<<temp1 -> data<<endl;
            free(temp1);
        }
        else if(pos == 0){
            temp1 = HEAD;

            HEAD = HEAD -> right;
            HEAD -> left = NULL;
            temp1 -> right = NULL;

            cout<<"Deleted Node : "<<temp1 -> data<<endl;
            free(temp1);
        }else{
            temp1 = temp2 = HEAD;

            for(i=0; i<pos; i++){
                temp1 = temp2;
                temp2 = temp2 -> right;
            }

            if(temp2 -> right == NULL){
                temp1 -> right = NULL;
                temp2 -> left = NULL;
            }else{
                temp = temp2 -> right;
                temp1 -> right = temp;
                temp -> left = temp1;

                temp2 -> left = NULL; 
                temp2 -> right = NULL;
            }

            cout<<"Deleted Node : "<<temp2 -> data<<endl;
            free(temp2);
        }
    }
    return HEAD;
}

void DList::display(NODE *HEAD){
    NODE *temp;

    if(HEAD == NULL)
        cout<<"List is Empty!"<<endl;
    else{
        temp = HEAD;
        while(temp -> right != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> right;
        }
        cout<<temp -> data<<endl;

        while(temp -> left != NULL){
            cout<<temp -> data<<" <- ";
            temp = temp -> left;
        }
        cout<<temp -> data<<endl;
    }
}