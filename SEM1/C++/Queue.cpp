/* Program to Convert Decimal numbers to Binary using CPP */

# include <iostream>
# define MAX 5
using namespace std;

class CQueue {
  int front,rear, CQ[MAX];

  public:
    CQueue(){
        front = -1;
        rear = -1;
    }
    void insert();
    void remove();
    void display();
};

int main()
{
    CQueue c;
    int ch;

    while(true){
        cout<<"\n---MENU---\n";
        cout<<"1.Insert \n2.Delete \n3.Display \n4.Exit \n";
        cout<<"Enter your Choice : ";
        cin>> ch;

        switch (ch)
        {
            case 1:
                c.insert();
                break;
            case 2:
                c.remove();
                break;
            case 3:
                c.display();
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

void CQueue :: insert(){
    int num;
    if((rear + 1) % MAX == front)
        cout<<"\nCircular Queue is Full..!";
    else{
        cout<<"Enter the number : ";
        cin>>num;

        rear = (rear + 1) % MAX;
        CQ[rear] = num;

        if(front == -1)
            front = 0;
    }
}

void CQueue :: remove(){
    int num;
    if(front == -1)
        cout<<"\nCircular Queue is Empty..!";
    else{
        num = CQ[front];
        
        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;

        cout<<"Deleted elemnt is : "<<num<<endl;
    }
}

void CQueue :: display(){
    if(front == -1)
        cout<<"\nCircular Queue is Empty..!";
    else{
        for(int i=front; i<=rear; i++)
            cout<<CQ[i]<<endl;
    }
}