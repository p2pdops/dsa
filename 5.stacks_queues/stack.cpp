#include <iostream>
using namespace std;
class Stack
{
    int top;
    int size;

    char *array;

public:
    Stack(int cap)
    {
        size = cap;
        array = new char[cap];
        top = -1;
    }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == size - 1; }

    void push(char val)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        array[++top] = val;
        cout << array[top] << " inserted into stack" << endl;
    }

    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }

        char val = array[top--];
        return val;
    }

    char peek(int pos = 1)
    {
        if (top - pos + 1 < 0)
        {
            cout << "Invalid position" << endl;
            return -1;
        }

        return array[top - pos + 1];
    }
};
