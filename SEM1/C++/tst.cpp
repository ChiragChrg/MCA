#include<iostream>
using namespace std;
class Stk{
    int arr[10],top =-1;
    
    public:
    void insert_stack(int num){
        if(top == 9){
            cout<<"Stack is full"<<endl;
        }else{
            top++;
            arr[top] = num;
            
        }
    }
    
    void display(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
        }else{
            for(int i = top;i>=0;i--){
                cout<<arr[i];
            }
        }
    }
};

int main(){
    Stk s;
    int num,i=0,val,len;
    cout<<"Enter a Number to find the binary value of it : ";
    cin>>num;
    val = num;
    // cout<<(num%2)<<endl;
    // cout<<(num/2)<<endl;
    // num = num/2;
    // cout<<(num/2)<<endl;
    // cout<<(num%2);
    
    while(num/2 != 1){
        int temp=(num%2);
        s.insert_stack(temp);
        num = (num/2);
    }
        s.insert_stack(num%2);
        s.insert_stack(num/2);
        
    s.display();
    
    return 0;
}