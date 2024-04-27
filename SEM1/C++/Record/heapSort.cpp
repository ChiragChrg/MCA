#include <iostream>
using namespace std;
void heapsort(int x[], int N);

int main() {
    int N, i;

    cout<<"Enter the number of elements : ";
    cin>>N;
    
    int x[N];
    cout<<"Enter "<<N<<" elements : ";
    for (i = 0; i < N; i++)
        cin>>x[i];

    cout<<"Original array : "<<endl;
    for (i = 0; i < N; i++)
        cout<<x[i]<<" ";
    cout<<endl;

    heapsort(x, N);
    cout<<"Sorted array : "<<endl;
    for (i = 0; i < N; i++)
        cout<<x[i]<<" ";
    cout<<endl;

    return 0;
}

void heapsort(int x[], int N) {
    int i, ele, s, f, ivalue;

    for (i = 1; i<N; i++) {
        ele = x[i];
        s = i;
        f = (s - 1) / 2;

        while (s > 0 && x[f] < ele) {
            x[s] = x[f];
            s = f;
            f = (s - 1) / 2;
        }
        x[s] = ele;
    }

    for (i = N - 1; i > 0; i--) {
        ivalue = x[i];
        x[i] = x[0];
        f = 0;

        if (i == 1)
            s = -1;
        else
            s = 1;

        if (i > 2 && x[2] > x[0])
            s = 2;

        while (s >= 0 && ivalue < x[s]) {
            x[f] = x[s];
            f = s;
            s = 2 * f + 1;

            if (s + 1 <= i - 1 && x[s] < x[s + 1])
                s = s + 1;

            if (s > i - 1)
                s = -1;
        }

        x[f] = ivalue;
    }
}