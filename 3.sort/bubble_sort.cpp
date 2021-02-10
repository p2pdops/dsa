#include <iostream>

using namespace std;

int main() {
    cout << "enter array size ";
    int n; cin >> n;

    int *array = new int[n];

    cout << "enter array elements ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = n; i > 0; i--)
        for (int j = 0; j < i - 1; j++)
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);

    cout << "elements after sorting ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << endl;

    return 0;
}