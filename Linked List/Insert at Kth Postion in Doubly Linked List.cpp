#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node* prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev=NULL;
    }
};

void insert_pos(Node* &head,int pos,int val)
{
    Node* p=head;
    Node* temp=new Node(val);
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;
    temp->prev=p;
    
}

void Display(Node *&head)
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

    two->prev=one;
    three->prev=two;

    Node *head = one;
    Display(head);
    insert_pos(head,2,0);
    Display(head);
}
