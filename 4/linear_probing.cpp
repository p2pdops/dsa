#include <iostream>

using namespace std;

int Insert(int *H, int key, int size)
{
    int index = key % size;
    while (H[index % size] != INT_MIN)
        index++;
    H[index % size] = key;
    return index % size;
}

int Search(int *H, int key, int size)
{
    int index = key % size, i = 0;
    while (H[(index + i) % size] != key && i != size)
        i++;
    return (i != size) ? (index + i) % size : -1;
}

int main()
{
    cout << "****** hashing *****" << endl;
    cout << "enter the size of hash table :  ";

    int n;
    cin >> n;

    int *HT = new int[n];
    for (int i = 0; i < n; i++)
        HT[i] = INT_MIN;

    int index, elements = 0;
    do
    {
        cout << "1.insert" << endl
             << "2.search" << endl
             << "3.exit" << endl
             << "enter your choice : ";
        int choice;
        cin >> choice;
        switch (choice)
        {

        case 1:
            if (elements == n)
            {
                cout << "table is full  " << endl;
                break;
            }
            cout << "enter a value to insert : ";
            int val;
            cin >> val;
            index = Insert(HT, val, n);
            cout << "value inserted at location " << index << endl;
            elements++;
            break;

        case 2:
            cout << "enter a value to search : ";
            int k;
            cin >> k;
            index = Search(HT, k, n);
            if (index != INT_MIN)
                cout << "value found at location  " << index << endl;
            else
                cout << "element not found in the hashtable " << endl;
            break;
        case 3:
            return 0;
        }
    } while (true);
}