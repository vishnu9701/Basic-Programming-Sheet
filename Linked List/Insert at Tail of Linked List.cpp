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

  void insert_tail(Node *&head, int val)
    {
        Node *p = head;
        Node *temp = new Node(val);
        while (p->next != NULL)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
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
    insert_tail(head,0);
    display(head);
}
