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


void display(Node *&head)
{
    Node *p = head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main()
{
    Node *one = new Node(3);
    Node *two = new Node(6);
    Node *three = new Node(9);

    one->next = two;
    two->next = three;
    three->next = one;

    Node *head = one;
    display(head);
}
