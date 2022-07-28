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

int Max_Nodes(Node *&head)
{
    Node *p = head;
    int max = p->data;
    while (p != NULL)
    {
        if(max<p->data)
        {
            max=p->data;
        }
        p = p->next;
    }
    return max;
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
    Node *two = new Node(66);
    Node *three = new Node(9);

    one->next = two;
    two->next = three;
    three->next = NULL;

    Node *head = one;
    display(head);
    cout << "Maximum of Nodes in Linked List is " << Max_Nodes(head) << endl;
}
