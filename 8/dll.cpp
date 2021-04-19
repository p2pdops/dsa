#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev, *next;
    Node(int val) : data(val) {}
};

class DoubleLinkedList
{
private:
    Node *head, *tail;

public:
    void insert_at_pos(int val, int pos)
    {
        Node *temp = new Node(val);
        int i = 0;
        Node *trv = head;
        while (trv->next != NULL && i != pos) // somehow traverse to pos
            trv = trv->next;

        // add links to prev
        temp->prev = trv;
        temp->next = trv->next;

        // add links to trv & trv's next
        trv->next->prev = temp;
        trv->next = temp;
    }
};
