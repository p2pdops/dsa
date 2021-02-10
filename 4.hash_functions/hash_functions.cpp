#include <iostream>
using namespace std;

int hash(int key, int size) { return key % size; }

int LinearProbe(int HT[], int key, int size)
{
    int index = ::hash(key, size), i = 0;
    while (HT[(index + i) % size] != INT_MIN)
        i++;
    return (index + i) % size;
}

int Insert(int HT[], int key, int size)
{
    int index = ::hash(key, size);
    if (HT[index] != INT_MIN)
        index = LinearProbe(HT, key, size);
    HT[index] = key;
    return index;
}

int Search(int HT[], int key, int size)
{
    int index = ::hash(key, size), i = 0;
    while (HT[index] != INT_MIN && i != size)
    {
        if (HT[index] == key)
            return index;
        index++;
        if (index == size)
            index = ::hash(index, size);
        i++;
    }
    return INT_MIN;
}

int main()
{
    cout << "****** hashing *****" << endl;
    cout << "enter the size of hash table :  ";

    int n; cin >> n;

    int *HT = new int[n];
    for (int i = 0; i < n; i++) HT[i] = INT_MIN;

    int index, elements = 0;
    do {
        cout << "1.insert" << endl
             << "2.search" << endl
             << "3.exit" << endl
             << "enter your choice : ";
        int choice; cin >> choice;
        switch (choice) {

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

            default:
                cout << "Invalid choice" << endl;
        }
    } while (true);
}