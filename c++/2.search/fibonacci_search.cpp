#include <iostream>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
    cout << "enter array size ";
    int n; cin >> n;
    cout << "enter array elements ";
    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    cout << "enter element you want to search ";
    int k;
    cin >> k;

    int fib_m2 = 0, fib_m1 = 1, fib_m = 1;
    while (fib_m < n)
        fib_m2 = fib_m1, fib_m1 = fib_m, fib_m = fib_m1 + fib_m2;

    int offset = -1, last = n - 1;

    while (fib_m > 1) {
        int index = min(offset + fib_m2, last);
        if (array[index] < k) { // step down once
            fib_m = fib_m1, fib_m1 = fib_m2;
            fib_m2 = fib_m - fib_m1, offset = index;
        } else if (array[index] > k) { // step down twice
            fib_m = fib_m2, fib_m1 = fib_m1 - fib_m2;
            fib_m2 = fib_m - fib_m1;
        } else {
            cout << "Element found at location : " << index << endl;
            return 0;
        }
    }

    if (fib_m2 == 0 && fib_m1 == 1 && array[offset + 1] == k)
        cout << "Element found at location : " << offset + 1 << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}