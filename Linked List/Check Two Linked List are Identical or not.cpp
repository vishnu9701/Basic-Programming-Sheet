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

void Compare(Node *&head1, Node *&head2)
{
    Node *p = head1;
    Node *q = head2;

    while (p != NULL && q != NULL)
    {
        if (p->data != q->data)
        {
            cout << "Not Indentical" << endl;
            return;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }

    if (p == NULL && q == NULL)
    {
        cout << "Both Linked List are Indentical" << endl;
    }
}

int main()
{
    Node *one = new Node(3);
    Node *two = new Node(6);
    Node *three = new Node(9);

    one->next = two;
    two->next = three;
    three->next = NULL;

    Node *head1 = one;

    Node *four = new Node(3);
    Node *five = new Node(6);
    Node *six = new Node(9);

    four->next = five;
    five->next = six;
    six->next = NULL;

    Node *head2 = four;

    Compare(head1, head2);
}
