/* Program to Convert Decimal numbers to Binary using CPP */

#include <iostream>
using namespace std;

class Stack {
  int top=-1, stk[10];

  public:
    void push(int N){
      top += 1;
      stk[top] = N;
    }

    void display(){
        for(int i=top; i>=0; i--)
            cout<<stk[i];
    }
};

int main(){
    Stack s;
    int num, remainder;
    cout << "Enter a Number :";
    cin >> num;

    while(num != 1){
        remainder = num % 2;
        s.push(remainder);
        num = num / 2;
    }
    s.push(num);
    
    s.display();
    return 0;
}