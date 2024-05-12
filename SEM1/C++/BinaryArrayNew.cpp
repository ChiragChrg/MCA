#include <iostream>
#define NUMNODES 100
using namespace std;

struct Node {
    int data;
    int flag;
} NODE[NUMNODES];

void makeTree(int num);
void setLeft(int p, int num);
void setRight(int p, int num);
void display(int N);

int main() {
    int p, q, N;

    cout << "Enter the number of elements: ";
    cin >> N;

    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        p = q = 0;
        int num;
        cin >> num;
        
        makeTree(num);

        while (q < NUMNODES && NODE[q].flag && num != NODE[p].data) {
            p = q;

            if (num < NODE[p].data)
                q = 2 * p + 1;
            else
                q = 2 * p + 2;
        }

        if (num == NODE[p].data)
            cout << "Duplicate Element\n";
        else if (num < NODE[p].data)
            setLeft(p, num);
        else
            setRight(p, num);
    }
    display(N);

    return 0;
}

void makeTree(int num){
    NODE[0].data = num;
    NODE[0].flag = 1;

    for(int i = 1; i<NUMNODES; i++)
        NODE[i].flag = 0;
}

void setLeft(int p, int num) {
    int q = 2 * p + 1;

    if (q >= NUMNODES)
        cout << "Array Overflow!";
    else if (NODE[q].flag == 1)
        cout << "Invalid";
    else {
        NODE[q].data = num;
        NODE[q].flag = 1;
    }
}

void setRight(int p, int num) {
    int q = 2 * p + 2;

    if (q >= NUMNODES)
        cout << "Array Overflow!";
    else if (NODE[q].flag == 1)
        cout << "Invalid";
    else {
        NODE[q].data = num;
        NODE[q].flag = 1;
    }
}

void display(int N) {
    cout<<"\nBinary Tree Elements are : "<<endl;

    for (int i = 0; i < N; i++) {
        if (NODE[i].flag == 1)
            cout << NODE[i].data << " ";
    }
    cout << endl;
}
