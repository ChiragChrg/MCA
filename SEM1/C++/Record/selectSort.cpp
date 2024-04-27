#include <iostream>
using namespace std;
void selectionSort(int [], int);

int main(){
    int x[10], N, i;
    cout<<"Enter number of Elements : ";
    cin>>N;
    cout<<"Enter Elements : ";
    for(i = 0; i<N; i++)
        cin>>x[i];
        
    selectionSort(x, N);
    return 0;
}

void selectionSort(int x[10], int N){
    int i, j, large, index;

    for(i = N-1; i>0; i--){
        large = x[0];
        index = 0;
        for(j = 1; j<=i; j++){
            if(x[j]>large) {
                large = x[j];
                index = j;
            }
        }
        x[index] = x[i];
        x[i] = large;
    }

    cout<<"Sorted Elements are : ";
    for(i=0; i<N; i++)
        cout<<x[i]<<"  ";
}