#include <iostream>
using namespace std;
void MergeSort(int [], int);

int main(){
    int x[10], N, i;

    cout<<"Enter number of Elements : ";
    cin>>N;

    cout<<"Enter the Elements : ";
    for(i = 0; i<N; i++)
        cin>>x[i];

    MergeSort(x, N);
    return 0;
}

void MergeSort(int x[], int N){
    int AUX[N], i, j, k, l1, l2, u1, u2, size;
    size = 1;

    while(size < N) {
        l1 = 0;
        k = 0;
        while(l1+size < N) {
            l2 = l1 + size;
            u1 = l2 - 1;
            u2 = (l2 + size - 1 < N) ? l2 + size - 1:N - 1;

            for(i = l1, j = l2; i <= u1 && j <= u2; k++){
                if(x[i] <= x[j])
                    AUX[k] = x[i++];
                else
                    AUX[k] = x[j++];
            }

            while(i <= u1)
                AUX[k++] = x[i++];
            
            while(j <= u2)
                AUX[k++] = x[j++];
            
            l1 = u2 + 1;
        }

        for(i = l1; k < N; i++)
            AUX[k++] = x[i];
        
        for(i =0; i < N; i++)
            x[i] = AUX[i];
        
        size = size * 2;
    }
    
    cout<<"Sorted Elements are:";
    for(i=0; i<N; i++)
        cout<<x[i]<<"  ";
}