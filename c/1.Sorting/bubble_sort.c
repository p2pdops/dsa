/* BUBBLE SORT
 * passes       -> n-1
 * comparisions -> n*(n-1)/2 -> O(n^2) <- Time complexity
 * swaps        -> n*(n-1)/2 -> O(n^2)
*/

#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

void main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    BubbleSort(arr, n);

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}