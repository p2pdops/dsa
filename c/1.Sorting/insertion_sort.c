#include <stdio.h>

void InsertionSort(int array[], int n)
{
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
}

void main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}
