#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int k; cin >> k;

    for (int i = 0; i < n; i++) {
        if (array[i] == k) {
            cout << "Element found at : " << i << " index" << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;

    return -1;
}