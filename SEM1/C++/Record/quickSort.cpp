#include <iostream>
using namespace std;

int quick(int a[], int low, int high);
int partition(int a[], int low, int high);

int main() {
    int i, n, j, a[20], low, high;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    low = 0;
    high = n - 1;
    quick(a, low, high);

    cout << "Array after sorting: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

int quick(int a[], int low, int high) {
    int keypos;

    if (low >= high)
        return 0;
    else {
        keypos = partition(a, low, high);
        quick(a, low, keypos - 1);
        quick(a, keypos + 1, high);
    }
    return 0;
}

int partition(int a[], int low, int high) {
    int i, j, key, temp;
    i = low + 1;
    j = high;
    key = a[low];

    while (1) {
        while (key > a[i] && i < high)
            i++;

        while (key < a[j])
            j--;

        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }else {
            temp = a[low];
            a[low] = a[j];
            a[j] = temp;
            return j;
        }
    }
}
