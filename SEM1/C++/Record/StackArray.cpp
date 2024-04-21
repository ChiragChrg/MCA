# include <iostream>
# define MAX 5
using namespace std;

class Stack {
    int stk[MAX], top;

    public:
        Stack(){
            top = -1;
        }
        void push();
        void pop();
        void display();
};

int main(){
    Stack S;
    int ch;

    while(true){
        cout<<"\n--- MENU ---";
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: S.push();
                    break;
            case 2: S.pop();
                    break;
            case 3: S.display();
                    break;
            case 4: cout<<"Exiting Program...";
                    exit(0);
            default: cout<<"Invalid Choice!";
                    break;
        }
    }


    return 0;
}

void Stack :: push(){
    int num;

    if(top == MAX-1)
        cout<<"Stack is Full!";
    else{
        cout<<"Enter the Number : ";
        cin>>num;

        top += 1;
        stk[top] = num;
    }
}

void Stack :: pop(){
    int num;

    if(top == -1)
        cout<<"Stack is Empty!";
    else{
        num = stk[top];
        top -= 1;

        cout<<"Deleted : "<<num<<endl;
    }
}

void Stack :: display(){
    int i;

    if(top == -1)
        cout<<"Stack is Empty!";
    else{
        for(i=top; i>=0; i--)
        cout<<stk[i]<<" ";
    }
}