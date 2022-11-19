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

int Sum_Nodes(Node *root)
{
    if (root == NULL)
        return 0;

    return Sum_Nodes(root->left) + Sum_Nodes(root->right) + root->data;
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

    cout << Sum_Nodes(root);
}
