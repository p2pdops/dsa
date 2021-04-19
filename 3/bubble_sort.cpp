#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    bubble_sort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


