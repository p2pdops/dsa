#include <iostream>
using namespace std;

class Cq
{
    int *arr;
    int size;
    int front = 0, rear = 0;

public:
    Cq(int s)
    {
        arr = new int[s], size = s;
    }

    void enqueue(int val)
    {
        if ((rear + 1) % size == front)
            printf("Q is full");
        else
        {
            rear = (rear + 1) % size, arr[rear] = val;
        }
    }
    void dequeue()
    {
        if (front == rear)
            printf("q is empty");
        else
        {
            front = (front + 1) % size;
            cout << "dequeued" << arr[front];
        }
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
    Cq cq(10);
    int d;
    do
    {
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            cin >> d;
            cq.enqueue(d);
            break;
        case 2:
            cq.dequeue();
            break;
        case 3:
            cq.display();
            break;

        default:
            break;
        }
    } while (true);
}