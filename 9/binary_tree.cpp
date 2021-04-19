#include <iostream>
#include <math.h>
using namespace std;

int left_child_pos(int i) { return 2 * i; }
int right_child_pos(int i) { return 2 * i + 1; }

void preorder(int *arr, int n, int curr)
{
    if (curr < 0 || curr >= n || arr[curr] == -1)
        return;
    printf("%d ", arr[curr]);
    preorder(arr, n, left_child_pos(curr));
    preorder(arr, n, right_child_pos(curr));
}

void inorder(int *arr, int n, int curr)
{
    if (curr < 0 || curr >= n || arr[curr] == -1)
        return;
    inorder(arr, n, left_child_pos(curr));
    printf("%d ", arr[curr]);
    inorder(arr, n, right_child_pos(curr));
}

void postorder(int *arr, int n, int curr)
{
    if (curr < 0 || curr >= n || arr[curr] == -1)
        return;
    postorder(arr, n, left_child_pos(curr));
    postorder(arr, n, right_child_pos(curr));
    printf("%d ", arr[curr]);
}

int main()
{
    int h;
    cin >> h;
    int s = pow(2, h + 1) - 1;
    int *arr = new int[s + 1];
    for (int i = 1; i < s; i++)
        cin >> arr[i];

    cout << "Preorder is : ";
    preorder(arr, s, 1);
    cout << endl;

    cout << "Postorder is : ";
    postorder(arr, s, 1);
    cout << endl;

    cout << "Inorder is : ";
    inorder(arr, s, 1);
    cout << endl;

    return 0;
}