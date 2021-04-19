#include <iostream>
using namespace std;

class Queue
{
    int *arr = new int[2];
    int f = -1, r = -1;
    int size = 2;

public:
    void enqueue(int val)
    {
        if (f == size - 1)
            printf("Queue is full!\n");
        else
        {
            if (f == r)
                arr[r = ++f] = val;
            else
                arr[++f] = val;
        }
    }
    int dequeue()
    {
        if (f == -1 || r == -1)
            return INT_MIN;
        int n = r--;
        if (r == -1)
            f = r;
        return arr[n];
    }

    void display()
    {
        cout << "Queue elements " << endl;
        for (int i = 0; i < size; i++)
            cout << arr[i] << "  ";
        cout << endl;
    }
};

int main()
{
    Queue q;
    int k;
    do
    {
        printf("1.enq 2. deq 3.display 4.exit\nenter your choise :");
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            printf("Enter val to enq:");
            cin >> k;
            q.enqueue(k);
            break;
        case 2:
            k = q.dequeue();
            if (k != INT_MIN)
                cout << k << " is dequeued" << endl;
            else
                printf("Queue empty\n");

            break;
        case 3:
            q.display();
            break;
        default:
            break;
        }
    } while (true);
}