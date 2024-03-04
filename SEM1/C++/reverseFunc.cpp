# include <iostream>
using namespace std;

int reverse(char x[10],int N);

int main(){
    int len;
    char str[10];

    cout<<"Enter the String : ";
    cin>>str;

    for(len=0; str[len]!= '\0'; len++);

    cout<<"Reverse of "<<str<<" is : ";
    reverse(str,len);
    
    return 0;
}

int reverse(char x[10],int N){
    int i;
    char rev[10];

    i=0;
    while(N > 0){
        rev[i] = x[N-1];
        i++;
        N--;
    }
    rev[i] = '\0';

    cout<<rev<<endl;
    return 0;
}