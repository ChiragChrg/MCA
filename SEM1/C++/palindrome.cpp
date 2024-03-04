# include <iostream>
using namespace std;

int main(){
    int  i, flag=0, len;
    char str1[10], str2[10];

    cout<<"Enter the String : ";
    cin>>str1;

    for(len=0; str1[len]!= '\0'; len++);

    i=0;
    while(len > 0){
        str2[i] = str1[len-1];
        if(str1[i] != str1[len-1]){
            flag = 1;
        }
        i++;
        len--;
    }

    cout<<"Reverse of '"<<str1<<"' is : '"<<str2<<"'"<<endl;
    
    if(flag == 0)
            cout<<"Given String is a Palindrome"<<endl;
        else 
            cout<<"Given String is Not a Palindrome"<<endl;
    
    return 0;
}