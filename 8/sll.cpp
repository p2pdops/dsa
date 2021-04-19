#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int val) : data(val) {}
};

class Sll
{

    Node *head;

public:
    void display()
    {
        Node *t = head;
        while (t->next != NULL)
            cout << t->data << "<---", t = t->next;
    }
    void insert_begin(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    void insert_end(int val)
    {
        Node *temp = new Node(val), *t = head;

        while (t->next != NULL)
            t = t->next;
        t->next = temp;
    }
    void insert_pos(int pos, int val)
    {
        Node *temp = new Node(val), *t = head;
        int i = 0;
        while (t->next != NULL && i++ != pos)
            t = t->next;
        temp->next = t->next;
        t->next = temp;
    }
    void del_begin()
    {
        cout << "Deleted " << head->data;
        head = head->next;
    }
    void del_end()
    {
        Node *t = head;
        while (t->next->next != NULL)
            t = t->next;
        cout << "Deleted " << t->next->data;
        t->next = NULL;
    }
    void del_pos(int pos)
    {
        Node *t = head;
        int i = 0;
        while (t->next != NULL && i++ != pos)
            t = t->next;
        cout << "deleted " << t->next->data;
        t->next = t->next->next;
    }
};

int main()
{

    return 0;
}