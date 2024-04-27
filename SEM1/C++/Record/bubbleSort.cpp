#include <iostream>
using namespace std;
void bubbleSort(int[], int);

int main(){
    int x[10], N;

    cout<<"Enter no of Elements : ";
    cin>>N;

    cout<<"Enter Elements in array : ";
    for(int i = 0; i < N; i++)
        cin>>x[i];

    bubbleSort(x, N);
    return 0;
}

void bubbleSort(int x[10], int N){
    int i, j, temp;

    for(i = 0; i < N; i++){
        for(j = 0; j<N-i-1; j++){
            if(x[j] > x[j+1])  {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            } 
        }
    }

    cout<<"\nSorted Elements are : ";
    for(i = 0; i < N; i++)
        cout<<x[i]<<"  ";
}