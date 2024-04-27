# include <iostream>
# define MAX 5
using namespace std;

class Queue {
  int front, rear, Q[MAX];

  public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void insert();
    void remove();
    void display();
};

int main()
{
    Queue q;
    int ch;

    while(true){
        cout<<"\n---MENU---\n";
        cout<<"1.Insert \n2.Delete \n3.Display \n4.Exit \n";
        cout<<"Enter your Choice : ";
        cin>> ch;

        switch (ch)
        {
            case 1:
                q.insert();
                break;
            case 2:
                q.remove();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout<<"Exiting program...";
                exit(0);
            default:
                cout<<"Invalid Choice";
                break;
        }
    }
    
    return 0;
}

void Queue :: insert(){
    int num;
    if(rear == MAX - 1)
        cout<<"\nQueue is Full..!";
    else{
        cout<<"Enter the number : ";
        cin>>num;

        rear = rear + 1;
        Q[rear] = num;

        if(front == -1)
            front = 0;
    }
}

void Queue :: remove(){
    int num;
    if(front == -1)
        cout<<"\nQueue is Empty..!";
    else{
        num = Q[front];
        
        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;

        cout<<"Deleted elemnt is : "<<num<<endl;
    }
}

void Queue :: display(){
    if(front == -1)
        cout<<"\nQueue is Empty..!";
    else{
        for(int i=front; i<=rear; i++)
            cout<<Q[i]<<endl;
    }
}