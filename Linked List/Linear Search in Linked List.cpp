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

void Linear_Search(Node *&head,int key)
{
    Node *p = head;
    int pos=1;
    while (p != NULL)
    {
        if(key==p->data)
        {
           cout<<"Key is Found at "<<pos<<endl;
           return;
        }
        pos++;
        p=p->next;
    }

    cout<<"Key is not Found"<<endl;
    
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
    Linear_Search(head,6);
}
