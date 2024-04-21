# include <iostream>
# define MAX 10
using namespace std;

class Evaluate {
    char postfix[MAX];
    int top, val, stk[MAX];

    public:
        Evaluate(){
            top = -1;
            val = 0;
        }

        void read(){
            cout<<"\nEnter the Infix expression : ";
            cin>>postfix;
        }

        void push(int num){
            if(top+1 == MAX){
                cout<<"\nStack Full!";
                return;
            }
            stk[top++] = num;
        }

        char pop(){
            if(top!= -1)
                return stk[top--];
            else
                return -1;
        }

        int convert(){
            int i = 0;

            while(postfix[i] != '\0'){
                if(postfix[i] >= '0' && postfix[i] <= '9')
                    push(postfix[i] - '0'); // Subtract by ASCII of Zero = 48
                else{
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

            cout<<num1<<" "<<op<<" "<<num2<<endl;

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

    E.read();
    result = E.convert();
    cout<<"Result of Postfix evaluation is : "<<result;

    return 0;
}