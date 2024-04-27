// 1. Write a C++ program to implement the following without using inbuilt string functions.
//     a. Concatenate two strings
//     b. Reverse a given string
//     c. Compare two strings
//     d. Extract a string from another string
//     e. Check whether the given string is present in the main string and return the position.

# include <iostream>
using namespace std;

void concatenate(char str1[10], char str2[10]);
void reverse(char str1[10]);
void compare(char str1[10], char str2[10]);
void extract(char str1[10], int start, int count);
void isExists(char str1[10], char str2[10]);

int main(){
    int ch;
    char str1[10], str2[10];

    while(true){
        cout<<"\n---MENU---";
        cout<<"\n1. Concatenate strings \n2. Reverse string \n3. Compare strings";
        cout<<"\n4. Extract string \n5. Check if string exists \n6. Exit\n";

        cout<<"\nEnter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: cout<<"Enter String 1 : ";
                    cin>>str1;
                    cout<<"Enter String 2 : ";
                    cin>>str2;
                    concatenate(str1, str2);
                    break;
            case 2: cout<<"Enter String : ";
                    cin>>str1;
                    reverse(str1);
                    break;
            case 3: cout<<"Enter String 1 : ";
                    cin>>str1;
                    cout<<"Enter String 2 : ";
                    cin>>str2;
                    compare(str1, str2);
                    break;
            case 4: int start, count;
                    cout<<"Enter String : ";
                    cin>>str1;
                    cout<<"Enter the start positon to extract : ";
                    cin>>start;
                    cout<<"Enter Number of characters to extract : ";
                    cin>>count;
                    extract(str1, start, count);
                    break;
            case 5: cout<<"Enter the Main String : ";
                    cin>>str1;
                    cout<<"Enter the Sub String : ";
                    cin>>str2;
                    isExists(str1, str2);
                    break;
            case 6: cout<<"\nExiting program...\n";
                    exit(0);
            default:cout<<"Invalid Choice ! \n";
                    break;
        }
    }
}

void concatenate(char str1[10], char str2[10]){
    char result[20];

    int i=0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }

    result[i + j] = '\0';

    cout<<"Concatenated String is : "<<result<<endl;
}

void reverse(char str[10]){
    int i, len;
    for(len=0; str[len]!= '\0'; len++);

    for(i=len-1; i>=0; i--)
        cout << str[i]<<" ";

    cout<<endl;
}

void compare(char str1[10], char str2[10]){
    int i, flag = 0;
    for(i=0; str1[i]!='\0'; i++){
        if(str1[i] != str2[i])
            flag = 1;
    }

    if(flag == 0)
        cout<<"Strings are Equal"<<endl;
    else
        cout<<"Strings are Not Equal"<<endl;
}

void extract(char str1[10], int start, int count){
    char str[10];
    int i, j;

    i = start;
    j = 0;

    while(i < start + count){
        str[j] = str1[i];

        i++;
        j++;
    }
    str[j] = '\0';

    cout<<"Extracted String is : "<<str<<endl;
}

void isExists(char main[10], char sub[10]){
    int i, j, flag = -1;
    i=j=0;

    while(main[i] != '\0'){
        if(main[i] == sub[j]){
            int temp = i;
            while(sub[j] != '\0' && main[i] == sub[j]){
                i++;
                j++;
            }

            if(sub[j] == '\0') 
                flag = temp;
            
            i = temp + 1;
            j = 0;
        }
        else
            i++;
    }

    if(flag == -1)
        cout<<sub<<" does not exist in "<<main<<endl;
    else
        cout<<sub<<" exists in "<<main<<" at position : "<<flag<<endl;
}