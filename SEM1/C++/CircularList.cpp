// Circular Linked List

# include <iostream>
using namespace std;

typedef struct CNODE {
    int data;
    struct CNODE *ptr;
} NODE;

class CList {
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
    CList CL;
    NODE *HEAD = NULL;

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Insert Begin \n2. Insert End \n3. Insert at Position";
        cout<<"\n4. Delete Begin \n5. Delete End \n6. Delete from Position";
        cout<<"\n7. Display \n8.Exit\n";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: HEAD = CL.insertBegin(HEAD);
                    break;
            case 2: HEAD = CL.insertEnd(HEAD);
                    break;
            case 3: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = CL.insertPos(HEAD, pos);
                    break;
            case 4: HEAD = CL.deleteBegin(HEAD);
                    break;
            case 5: HEAD = CL.deleteEnd(HEAD);
                    break;
            case 6: cout<<"Enter the Position : ";
                    cin>>pos;
                    HEAD = CL.deletePos(HEAD, pos);
                    break;
            case 7: CL.display(HEAD);
                    break;
            case 8: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
}

NODE *CList::insertBegin(NODE *HEAD){
    int num;
    NODE *newNode, *temp;
    newNode = (NODE *)malloc(sizeof(NODE));

    cout<<"Enter the Data : ";
    cin>>num;

    newNode -> data = num;
    newNode -> ptr = newNode;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        temp = HEAD;
        while(temp -> ptr != HEAD){
            temp = temp -> ptr;
        }

        temp -> ptr = newNode;
        newNode -> ptr = HEAD;
        HEAD = newNode;
    }
    return HEAD;
}

NODE *CList::insertEnd(NODE *HEAD){
    int num;
    NODE *newNode, *temp;
    newNode = (NODE *)malloc(sizeof(NODE));

    cout<<"Enter the Data : ";
    cin>>num;

    newNode -> data = num;
    newNode -> ptr = newNode;

    if(HEAD == NULL)
        HEAD = newNode;
    else{
        temp = HEAD;
        while(temp -> ptr != HEAD){
            temp = temp -> ptr;
        }

        temp -> ptr = newNode;
        newNode -> ptr = HEAD;
    }
    return HEAD;
}

NODE *CList::insertPos(NODE *HEAD, int pos){
    int num, i, count = 0;
    NODE *newNode, *temp, *temp1, *temp2;

    temp = HEAD;
    while(temp -> ptr != HEAD){
        count++;
        temp = temp -> ptr;
    }
    count++;
    
    if(pos > count)
        cout<<"Invalid Position !\n";
    else{
        cout<<"Enter the Data : ";
        cin>>num;

        newNode = (NODE *)malloc(sizeof(NODE));
        newNode -> data = num;
        newNode -> ptr = newNode;

        if(pos == 0 && HEAD == NULL)
            HEAD = newNode;
        else if(pos == 0){
            temp = HEAD;
            while(temp -> ptr != HEAD){
                temp1 = temp2;
                temp2 = temp2 -> ptr;
            }

            newNode -> ptr = HEAD;
            temp -> ptr = newNode;
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

NODE *CList :: deleteBegin(NODE * HEAD){
    NODE *temp1, *temp2;

    if(HEAD == NULL)
        cout<<"List is Empty !\n";
    else if(HEAD -> ptr == HEAD){
        temp2 = HEAD;
        HEAD = NULL;
        temp2 -> ptr = NULL;

        cout<<"Deleted Node : "<<temp2 -> data<<endl;
        free(temp2);
    }
    else{
        temp1 = temp2 = HEAD;
        while(temp2 -> ptr != HEAD){
            temp2 = temp2 -> ptr;
        }

        HEAD = HEAD -> ptr;
        temp2 -> ptr = HEAD;
        temp1 -> ptr = NULL;

        cout<<"Deleted Node : "<<temp1 -> data<<endl;
        free(temp1);
    }
    return HEAD;
}

NODE *CList :: deleteEnd(NODE * HEAD){
    NODE *temp1, *temp2;

    if(HEAD == NULL)
        cout<<"List is Empty !\n";
    else if(HEAD -> ptr == HEAD){
        temp2 = HEAD;
        HEAD = NULL;
        temp2 -> ptr = NULL;

        cout<<"Deleted Node : "<<temp2 -> data<<endl;
        free(temp2);
    }
    else{
        temp1 = temp2 = HEAD;
        while(temp2 -> ptr != HEAD){
            temp1 = temp2;
            temp2 = temp2 -> ptr;
        }

        temp1 -> ptr = HEAD;
        temp2 -> ptr = NULL;

        cout<<"Deleted Node : "<<temp2 -> data<<endl;
        free(temp2);
    }
    return HEAD;
}

NODE *CList::deletePos(NODE *HEAD, int pos){
    int i, count = 0;
    NODE *temp, *temp1, *temp2;

    temp = HEAD;
    while(temp -> ptr != HEAD){
        count++;
        temp = temp -> ptr;
    }
    count++;

    if(pos >= count)
        cout<<"Invalid Position !\n";
    else{
        temp = HEAD;
        if(HEAD == NULL)
            cout<<"List is Empty !\n";
        else if(pos == 0 && HEAD -> ptr == HEAD){
            temp = HEAD;
            HEAD = NULL;

            cout<<"Deleted Node : "<<temp -> data<<endl;
            free(temp);
        }
        else if(pos == 0){
            temp1 = temp2 = HEAD;
            while(temp2 -> ptr != HEAD){
                temp2 = temp2 -> ptr;
            }
            
            HEAD = HEAD -> ptr;
            temp2 -> ptr = HEAD;

            cout<<"Deleted Node : "<<temp1 -> data<<endl;
            free(temp1);
        }else{
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

void CList :: display(NODE * HEAD){
    NODE *temp;
    
    if(HEAD == NULL)
        cout<<"List is Empty!\n";
    else{
        temp = HEAD;
        while(temp -> ptr != HEAD){
            cout<<temp -> data<<" -> ";
            temp = temp -> ptr;
        }
        cout<<temp -> data<<endl;
    }
}