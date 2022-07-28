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

void insert_head(Node* &head,int val)
{
    Node* p=head;
    Node* temp=new Node(val);
    temp->next=head;
    head->prev=temp;
    head=temp;

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
    insert_head(head,0);
    Display(head);
}
