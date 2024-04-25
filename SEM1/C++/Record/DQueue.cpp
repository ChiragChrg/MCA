// C++ program to implement input restricted double ended queue using arrays and class.

#include <iostream>
#define MAX 3
using namespace std;

class DQueue{
    int front,rear;
    int DQ[MAX];

    public:
        DQueue(){
            front=rear=-1;
        }

        void insert();
        int deleteFront();
        int deleteRear();
        void display();
};

int main() {
    int ch;
    DQueue DQ;

    while(true){
        cout<<"\n--- MENU ---";
        cout<<"\n1. Insert";
        cout<<"\n2. Delete Front";
        cout<<"\n3. Delete Rear";
        cout<<"\n4. Display";
        cout<<"\n5. Exit";
        
        cout<<"\nEnter your Choice : ";
        cin>>ch;
        switch(ch){
            case 1: DQ.insert();
                    break;
            case 2: DQ.deleteFront();
                    break;
            case 3: DQ.deleteRear();
                    break;
            case 4: DQ.display();
                    break;
            case 5: cout<<"\nExiting Program...";
                    exit(0);
            default: cout<<"\nInvalid Choice!";
                    break;    
        }
    }
}

void DQueue::insert(){
    int num;

    if(rear==MAX-1)
        cout<<"\nQueue is Full\n";
    else{
        cout<<"Enter the Element : ";
        cin>>num;
        rear=rear+1;
        DQ[rear]=num;

        if(front==-1)
            front=0;
    }
}

int DQueue::deleteFront(){
    int num;

    if(front==-1)
        cout<<"\nDouble ended Queue is Empty\n";
    else{
        num=DQ[front];
        front=front+1;
        cout<<"\nDeleted element from Front : "<<num<<endl;

        if(front>=rear)
            front=rear=-1;
    } 
    return num;
}

int DQueue::deleteRear(){
    int num;

    if(front==-1)
        cout<<"\nDouble ended Queue is Empty\n";
    else{
        num=DQ[rear];
        cout<<"\nDeleted element from Rear : "<<num<<endl;

        if(front==rear)
            front=rear=-1;
        else
           rear=rear-1;
    } 
    return num;
}

void DQueue::display(){
    int i;

    if(front==-1)
        cout<<"Double Ended Queue is Empty\n";
    else
        for(i=front; i<=rear; i++)
            cout<<DQ[i]<<" ";
        
    cout<<endl;
    
}