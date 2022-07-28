#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void delete_Node(Node *&head, int key)
{
    Node *p = head;
    Node *q = NULL;
    if (p->data == key)
    {
        head = head->next;
        delete p;
    }
    else
    {
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
            if (p->data == key)
            {
                q->next = p->next;
                p->next = q;
                delete p;
                return;
            }
        }
        cout << "Key not Found";
    }
}

void display(Node *&head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Node *one = new Node(3);
    Node *two = new Node(6);
    Node *three = new Node(9);

    one->next = two;
    two->next = three;
    three->next = NULL;

    Node *head = one;
    display(head);
    delete_Node(head, 6);
    display(head);
}
