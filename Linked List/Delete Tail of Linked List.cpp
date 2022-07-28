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

void delete_tail(Node *&head)
{
    Node *p = head;
    Node *q = NULL;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    p->next = q;
    delete p;
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
    delete_tail(head);
    display(head);
}
