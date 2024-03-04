# include <iostream>
using namespace std;

int compare(char x[10], char y[10]);

int main(){
    int flag = 0;
    char str1[10],str2[10];

    cout<<"Enter the First String : ";
    cin>>str1;
    cout<<"Enter the Second String : ";
    cin>>str2;

    flag = compare(str1,str2);

    if(flag == 0)
        cout<<"Strings are Equal"<<endl;
    else
        cout<<"Strings are Not Equal"<<endl;
    
    return 0;
}

int compare(char x[10], char y[10]){
    int i;
    for(i=0; x[i]!='\0'; i++){
        if(x[i] != y[i])
            return 1;
    }
    return 0;
}