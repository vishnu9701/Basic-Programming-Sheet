#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int main()
{
    Node* one=new Node(3);
    Node* two=new Node(6);
    Node* three=new Node(9);

    one->next=two;
    two->next=three;
    three->next=NULL;

    Node* head=one;

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
