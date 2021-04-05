#include <iostream>

using namespace std;

int main()
{
    cout << "enter array size ";
    int n; cin >> n;

    int *array = new int[n];

    cout << "enter array elements ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    // selection sort
    for (int i = 0; i < n; i++)
    {
        int small_ele_index = i;
        for (int j = i; j < n; j++)
            if (array[j] < array[small_ele_index])
                small_ele_index = j;

        swap(array[small_ele_index], array[i]);
    }

    cout << "elements after sorting ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << endl;

    return 0;
}