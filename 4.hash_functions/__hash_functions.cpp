#include <iostream>
using namespace std;
int hashkey(int h[], int key, int size)
{
    int index, i = 0;
    index = key % size;
    while (h[index] != 777)
    {
        index++;
        if (index == size)
            index = index % size;
    }
    return index;
}
int search(int h[], int key, int size)
{
    int pos, i = 0;
    pos = key % size;
    while (h[pos] != 777 && i != size)
    {
        if (h[pos] == key)
            return pos;
        else
        {
            pos++;
            if (pos == size)
                pos = pos % size;
        }
        i++;
    }
    return 777;
}
int main()
{
    int ht[100], size, i, choice, key, index, no = 0;
    cout << "enter the size of hash table :  ";
    cin >> size;
    for (i = 0; i < size; i++)
        ht[i] = 777;
        
    while (1)
    {
        cout << "\n 1.insert\n 2.search\n 3.exit\n enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter a value to insert:   ";
            cin >> key;
            if (no == size)
                cout << "table is full  ";
            else
            {
                index = hashkey(ht, key, size);
                ht[index] = key;
                no++;
                cout << "value inserted at location  " << index;
            }
            break;
        case 2:
            cout << "enter a value to search  ";
            cin >> key;
            index = search(ht, key, size);
            if (index != 777)
                cout << "value found at location  " << index;
            else
                cout << "element  not found in the hashtable ";
            break;
        case 3:
            return 0;
        default:
            cout << "enter a valid option  ";
        }
    }
    return 0;
}
