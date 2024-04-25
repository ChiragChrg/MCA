// C++ program to implement ascending priority queue using arrays and class.

#include <iostream>
#define MAX 3
using namespace std;

class PQueue{
    int front, rear;
    int pq[MAX];

    public:
        PQueue(){
            front = rear = -1;
        }
        
        void fninsert();
        void fndelete();
        void display();
};

int main(){
    int ch;
    PQueue PQ;

    while(true){
        cout<<"\n--- MENU ---";
        cout<<"\n1.Insert";
        cout<<"\n2.Delete";
        cout<<"\n3.Display";
        cout<<"\n4.Exit";

        cout<<"\nEnter your Choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                PQ.fninsert();
                break;
            case 2:
                PQ.fndelete();
                break;
            case 3:
                PQ.display();
                break;
            case 4:
                cout<<"\nExiting Program...";
                exit(0);
            default:
                cout<<"\nInvalid Choice!";
                break;
        }
    }
}

void PQueue::fninsert(){
    int num;

    if (rear == MAX - 1)
        cout<<"PQueue is Full\n";
    else{
        cout<<"Enter the Element : ";
        cin >> num;
        rear = rear + 1;
        pq[rear] = num;

        if (front == -1)
            front = 0;
    }
}

void PQueue::fndelete(){
    int min, index, i;

    if (front == -1)
        cout<<"\nPQueue is Empty\n";
    else {
        min = pq[front];
        index = front;

        for (i = front + 1; i <= rear; i++){
            if (min > pq[i]) {
                min = pq[i];
                index = i;
            }
        }

        cout<<"Deleted element is: "<<min<<endl;
        for (i = index; i < rear; i++)
            pq[i] = pq[i + 1];

        rear = rear - 1;

        if (rear == -1) 
            front = -1;
    }
}

void PQueue::display(){
    int i;

    if (front == -1)
        cout<<"\nPQueue is Empty\n";
    else{
        for (i = front; i <= rear; i++)
            cout<<pq[i]<<" ";
        
        cout<<endl;
    }
}
