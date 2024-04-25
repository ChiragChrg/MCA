// Program to Evaluate Postfix expression
# include <iostream>
# define MAX 10
using namespace std;

class Evaluate {
    int top, val, stk[MAX];

    public:
        Evaluate(){
            top = -1;
            val = 0;
        }

        void push(int num){
            if(top+1 == MAX){
                cout<<"\nStack Full!";
                return;
            }
            top++;
            stk[top] = num;
        }

        int pop(){
            if(top == -1) return 0;

            int val = stk[top];
            top--;
            // cout<<"POPPED : "<<val<<" from "<<top<<endl;
            return val;
        }

        int convert(char postfix[]){
            int i = 0;

            while(postfix[i] != '\0'){
                if(postfix[i] >= '0' && postfix[i] <= '9'){
                    // cout<<"EXP : "<<postfix[i]<<endl;
                    push(postfix[i] - '0');
                }else{
                    // cout<<"OP : "<<postfix[i]<<endl;
                    int v = evalOP(postfix[i]);
                    push(v);
                }
                
                i++;
            }

            return pop();
        }

        int evalOP(char op){
            int num1 = pop();
            int num2 = pop();
            // cout<<num1<<" "<<op<<" "<<num2<<endl;
            switch(op){
                case '+': return num1 + num2;
                case '-': return num1 - num2;
                case '*': return num1 * num2;
                case '/': return num1 / num2;
                default: return 0;
            }
        }
};

int main(){
    Evaluate E;
    int result;
    char postfix[MAX];

    cout<<"\nEnter the Infix expression : ";
    cin>>postfix;

    result = E.convert(postfix);
    cout<<"Result of Postfix evaluation is : "<<result;

    return 0;
}