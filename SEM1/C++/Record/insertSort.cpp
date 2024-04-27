#include <iostream>
using namespace std;
void insertionSort(int[], int);

int main(){
    int x[10], N;
    cout<<"Enter no of Elements: ";
    cin>>N;
    cout<<"Enter Integers in an Array: ";
    for(int i = 0; i < N; i++)
        cin>>x[i];

    insertionSort(x, N);
    return 0;
}

void insertionSort(int x[10], int N){
    int i, j, key;
    for(i = 1; i < N; i++){
        key = x[i];
        for(j=i-1; j>=0 && key<x[j]; j--)
        {
            x[j+1] = x[j];
        }
        x[j+1] = key;
    }

    cout<<"Sorted Array using Insertion Sort are : ";
    for(i=0; i<N; i++)
        cout<<x[i]<<"  ";
}
