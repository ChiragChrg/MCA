# include <iostream>
using namespace std;

int main(){
    int a[10],n,i;

    cout<<"Enter No. of Elements : ";
    cin>>n;

    cout<<"Enter the Elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<endl;

    cout<<"Reverse Order :"<<endl;
    for(i=n-1; i>=0; i--)
        cout << a[i]<<" ";

    return 0;
}