#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

bool is_i(Node *r1, Node *r2)
{
    if (r1 == NULL || r2 == NULL)
        return r1 == r2;

    return (r1->data == r2->data &&
            is_i(r1->left, r2->left) && is_i(r1->right, r2->right));
}

int main()
{

    /*
          1
        /   \
      2      3
     / \    /  \
    4   5  6   7

    */
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << is_i(root, root);
}
