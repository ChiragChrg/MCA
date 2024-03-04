# include <iostream>
using namespace std;

int length(char x[10]);

int main(){
    int len;
    char str[10];

    cout<<"Enter the String : ";
    cin>>str;

    len = length(str);
    cout<<"Length of "<<str<<" is : "<<len<<endl;
    
    return 0;
}

int length(char x[10]){
    int i;
    for(i=0; x[i]!= '\0'; i++);
    return i;
}