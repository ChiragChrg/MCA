# include <iostream>
using namespace std;

int main(){
    int a[10],n,i,sum=0;

    cout<<"Enter No. of Elements : ";
    cin>>n;

    cout<<"Enter the Elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    cout<<"Sum : "<<sum;

    return 0;
}