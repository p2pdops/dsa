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

    // insertion sort
    for (int i = 0; i < n; i++)
    {
        int x = array[i];
        int j = i - 1;
        while (j > -1 && array[j] > x)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = x;
    }

    cout << "elements after sorting ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << endl;

    return 0;
}