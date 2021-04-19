#include <iostream>

using namespace std;

int main() {
    cout << "enter array size ";
    int n; cin >> n;

    int *array = new int[n];

    cout << "enter array elements ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << "enter element you want to search ";
    int k; cin >> k;

    int left = 0, right = n - 1, mid;

    while (left <= right){
        mid = (left + right) / 2;
        if (k == array[mid]) {
            cout << "element found at location : " << mid << endl;
            return 0;
        } else if (k < array[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << "element is not found!!!" << endl;

    return -1;
}