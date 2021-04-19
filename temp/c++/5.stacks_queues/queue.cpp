class Queue
{
    int front;
    int rear;
    int size;
    int *array;

public:
    Queue(int s)
    {
        size = s;
        front = rear = -1;
        array = new int[s];
    }

    bool isFull() { return (rear + 1) % size == front; }
    bool isEmpty() { return rear == front; }

    void enqueue(int val)
    {
        if (isFull())
            return;
        rear = (rear + 1) % size;
        array[rear] = val;
    }

    int dequeue(int val)
    {
        if (isEmpty())
            return -1;
        front = (front + 1) % size;

        return array[front++];
    }
};
