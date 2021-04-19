#include <iostream>
using namespace std;

class Stack
{
    int top = -1;
    int *arr = new int[3];

public:
    void push(int val)
    {
        if (top != 2)
        {
            arr[++top] = val;
            printf("Inserted!\n");
        }
        else
            printf("Stack is full!\n");
    }
    int pop()
    {
        if (top == -1)
            return INT_MIN;
        else
        {
            return arr[top--];
        }
    }
    void display()
    {
        int temp = top;
        cout << "Stack elements are:" << endl;
        while (temp >= 0)
            cout << arr[temp--] << endl;
        cout << endl;
    }
};

int main()
{
    Stack stack;
    int k;
    do
    {
        printf("1. Push 2. Pop 3. Display 4. Exit\n Choose option: ");
        int op;
        cin >> op;

        switch (op)
        {
        case 1:
            printf("Enter val to push:");
            cin >> k;
            stack.push(k);
            break;
        case 2:
            k = stack.pop();
            if (k != INT_MIN)
                printf("Deleted : %d", k);
            break;
        case 3:
            stack.display();
            break;
        case 4:
            return 0;
        }
    } while (true);
}