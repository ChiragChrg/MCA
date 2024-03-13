// Singly Linked List

# include <iostream>
using namespace std;

typedef struct SNODE {
    int data;
    struct SNODE *ptr;
} NODE;

class SList {
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
    SList SL;
    NODE *HEAD = NULL;

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Insert Begin \n2. Insert End \n3. Insert at Position";
        cout<<"\n4. Delete Begin \n5. Delete End \n6. Delete from Position";
        cout<<"\n7. Display \n8.Exit\n";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: HEAD = SL.insertBegin(HEAD);
                    break;
            case 2: HEAD = SL.insertEnd(HEAD);
                    break;
            case 3: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = SL.insertPos(HEAD, pos);
                    break;
            case 4: HEAD = SL.deleteBegin(HEAD);
                    break;
            case 5: HEAD = SL.deleteEnd(HEAD);
                    break;
            case 6: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = SL.deletePos(HEAD, pos);
                    break;
            case 7: SL.display(HEAD);
                    break;
            case 8: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
}

NODE *SList::insertBegin(NODE *HEAD){
    int num;
    NODE *newNode;
    newNode = (NODE *)malloc(sizeof(NODE));

    cout<<"Enter the Data : ";
    cin>>num;

    newNode -> data = num;
    newNode -> ptr = NULL;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        newNode -> ptr = HEAD;
        HEAD = newNode;
    }
    return HEAD;
}

NODE *SList::insertEnd(NODE *HEAD){
    int num;
    NODE *newNode, *temp;
    newNode = (NODE *)malloc(sizeof(NODE));

    cout<<"Enter the Data : ";
    cin>>num;

    newNode -> data = num;
    newNode -> ptr = NULL;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        temp = HEAD;
        while(temp -> ptr != NULL){
            temp = temp -> ptr;
        }

        temp -> ptr = newNode;
    }
    return HEAD;
}

NODE *SList::insertPos(NODE *HEAD, int pos){
    int num, i, count = 0;
    NODE *newNode, *temp, *temp1, *temp2;

    temp = HEAD;
    while(temp != NULL){
        count++;
        temp = temp -> ptr;
    }
    
    if(pos > count)
        cout<<"Invalid Position !\n";
    else{
        cout<<"Enter the Data : ";
        cin>>num;

        newNode = (NODE *)malloc(sizeof(NODE));
        newNode -> data = num;
        newNode -> ptr = NULL;

        if(pos == 0 && HEAD == NULL)
            HEAD = newNode;
        else if(pos == 0){
            newNode -> ptr = HEAD;
            HEAD = newNode;
        }else{
            temp2 = HEAD;
            for(i=0; i<pos; i++){
                temp1 = temp2;
                temp2 = temp2 -> ptr;
            }

            temp1 -> ptr = newNode;
            newNode -> ptr = temp2;
        }
    }
    return HEAD;
}

NODE *SList :: deleteBegin(NODE * HEAD){
    NODE *temp;

    if(HEAD == NULL)
        cout<<"List is Empty !\n";
    else{
        temp = HEAD;
        HEAD = HEAD -> ptr;
        temp -> ptr = NULL;

        cout<<"Deleted Node : "<<temp -> data<<endl;
        free(temp);
    }
    return HEAD;
}

NODE *SList :: deleteEnd(NODE * HEAD){
    NODE *temp1, *temp2;

    if(HEAD == NULL)
        cout<<"List is Empty !\n";
    else if(HEAD -> ptr == NULL){
        temp1 = HEAD;
        HEAD = NULL;

        cout<<"Deleted Node : "<<temp1 -> data<<endl;
        free(temp1);
    }
    else{
        temp2 = HEAD;
        while(temp2 -> ptr != NULL){
            temp1 = temp2;
            temp2 = temp2 -> ptr;
        }

        temp1 -> ptr = NULL;

        cout<<"Deleted Node : "<<temp2 -> data<<endl;
        free(temp2);
    }
    return HEAD;
}

NODE *SList::deletePos(NODE *HEAD, int pos){
    int i, count = 0;
    NODE *temp, *temp1, *temp2;

    temp = HEAD;
    while(temp != NULL){
        count++;
        temp = temp -> ptr;
    }
    cout<<"\nCount : "<<count<<endl;
    
    if(pos >= count)
        cout<<"Invalid Position !\n";
    else{
        temp = HEAD;
        if(HEAD == NULL)
            cout<<"List is Empty !\n";
        else if(pos == 0 && HEAD -> ptr == NULL){
            temp = HEAD;
            HEAD = NULL;

            cout<<"Deleted Node : "<<temp -> data<<endl;
            free(temp);
        }
        else if(pos == 0){
            temp = HEAD;
            HEAD = HEAD -> ptr;
            temp -> ptr = NULL; 

            cout<<"Deleted Node : "<<temp -> data<<endl;
            free(temp);
        }else{
            cout<<"\nInside Else"<<endl;
            temp2 = HEAD;
            for(i=0; i<pos; i++){
                temp1 = temp2;
                temp2 = temp2 -> ptr;
            }

            temp1 -> ptr = temp2 -> ptr;
            temp2 -> ptr = NULL;

            cout<<"Deleted Node : "<<temp2 -> data<<endl;
            free(temp2);
        }
    }
    return HEAD;
}

void SList :: display(NODE * HEAD){
    NODE *temp;
    
    if(HEAD == NULL)
        cout<<"List is Empty!\n";
    else{
        temp = HEAD;
        while(temp -> ptr != NULL){
            cout<<temp->data<<" -> ";
            temp = temp -> ptr;
        }
        cout<<temp->data<<endl;
    }
}