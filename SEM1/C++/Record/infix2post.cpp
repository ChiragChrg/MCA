# include <iostream>
using namespace std;

class Convert {
    char infix[30], postfix[30], opstk[30];
    int top;

    public:
        Convert(){
            top = -1;
        }

        void read(){
            cout<<"\nEnter the Infix expression : ";
            cin>>infix;
        }

        void display(){
            cout<<"\nInfix expression is : "<<infix;
            cout<<"\nPostfix expression is : "<<postfix;
        }

        void push(char op){
            top += 1;
            opstk[top] = op;
        }

        char pop(){
            char op;
            op = opstk[top];
            top--;

            return op;
        }

        void toPostfix();
        int prio(char);
};

void Convert :: toPostfix(){
    int i = 0, j = 0;
    char symb, topsymb;

    while (infix[i] != '\0') {
        symb = infix[i];

        if (symb >= 'A' && symb <= 'z')
            // Add alphabets to output postfix stack 
            postfix[j++] = symb;
        else {
            if (symb == '(') {
                push(symb);
            } else if (symb == ')') {
                while (top != -1 && opstk[top] != '(') {
                    topsymb = pop();
                    postfix[j++] = topsymb;
                }
                
                pop(); // Pop '('
            } else {
                // Add Operators to output postfix stack
                while (top != -1 && prio(symb) <= prio(opstk[top])) {
                    topsymb = pop();
                    postfix[j++] = topsymb;
                }
                push(symb);
            }
        }
        i++;
    }

    while(top != -1){
        // Add remaining Operators to output postfix stack
        topsymb = pop();
        if(topsymb !='(' && topsymb !=')')
            postfix[j++] = topsymb;
    }
    postfix[j++] = '\0';
}

int Convert :: prio(char op){
    switch(op){
        case '$': 
                return 3;
                break;
        case '*': 
        case '/': 
                return 2;
                break;
        case '+': 
        case '-': 
                return 1;
                break;
        case '(': 
        case ')': 
                return 0;
                break;
    }

    return -1;
}

int main(){
    Convert C;

    C.read();
    C.toPostfix();
    C.display();

    return 0;
}