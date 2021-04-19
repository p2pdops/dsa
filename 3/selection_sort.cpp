#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;
        swap(arr[i], arr[min_index]);
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    selection_sort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}