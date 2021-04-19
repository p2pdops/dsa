#include <iostream>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
