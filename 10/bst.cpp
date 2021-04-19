#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int v) : data(v) {}
};

void indorder(Node *root)
{
    if (root == NULL)
        return;
    indorder(root->left);
    printf("%d ", root->data);
    indorder(root->right);
}

Node *minValueNode(Node *node)
{
    Node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node *insert(int val, Node *root = NULL)
{
    if (root == NULL)
        return root = new Node(val);
    else if (root->data < val)
        return insert(val, root->left);
    else
        return insert(val, root->right);
}

Node *search(int key, Node *root = NULL)
{
    if (root == NULL || root->data == key)
        return root;
    else if (key < root->data)
        return search(key, root->left);
    else
        return search(key, root->right);
}

Node *deleteNode(int key, Node *root = NULL)
{
    if (root == NULL)
        return NULL;
    else
    {
        if (key < root->data)
            root->left = deleteNode(key, root->left);
        else if (key > root->data)
            root->right = deleteNode(key, root->right);
        else // key == root->data
        {
            if (root->left == NULL)
                return root->right;
            else if (root->right == NULL)
                return root->left;
            else
            {
                Node *temp = minValueNode(root->right);
                root->data = temp->data;
                root->right = deleteNode(temp->data, root->right);
                return root;
            }
        }
    }
}