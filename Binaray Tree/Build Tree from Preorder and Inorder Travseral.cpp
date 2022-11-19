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

int Search(int inorder[], int start, int end, int root)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == root)
            return i;
    }
    return -1;
}

Node *Build_Tree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
        return NULL;

    static int i = start;

    int root = preorder[i++];
    int pos = Search(inorder, start, end, root);

    Node *node = new Node(root);

    if (start == end)
        return node;

    node->left = Build_Tree(preorder, inorder, start, pos - 1);
    node->right = Build_Tree(preorder, inorder, pos + 1, end);
    return node;
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{

    /*
          1
        /   \
      2      3
     / \    /  \
    4   5  6   7


    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    */

    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};

    Node *root = Build_Tree(preorder, inorder, 0, 6);
    Preorder(root);
}
