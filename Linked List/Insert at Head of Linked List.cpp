#include<iostream>
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

void insert_head(Node *&head, int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }

  
    void display(Node *&head)
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout<<endl;
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
    insert_head(head,0);
    display(head);
}
