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
        left = NULL;
        right = NULL;
    }
};

int Search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}
Node *Build_Tree(int Preorder[], int Inorder[], int start, int end)
{
    if (start > end)
        return NULL;
    static int i = 0;

    int curr = Preorder[i];
    i++;
    int pos = Search(Inorder, start, end, curr);

    Node *node = new Node(curr);
    if (start == end)
        return node;
    node->left = Build_Tree(Preorder, Inorder, start, pos - 1);
    node->right = Build_Tree(Preorder, Inorder, pos + 1, end);
    return node;
}
void inord(Node *root)
{
    if (root == NULL)
        return;
    inord(root->left);
    cout << root->data;
    inord(root->right);
}
int main()
{
    int Preorder[] = {4, 2, 5, 1, 6, 3, 7};
    int Inorder[] = {1, 2, 4, 5, 3, 6, 7};
    Node *root = Build_Tree(Preorder, Inorder, 0, 6);
    inord(root);
}
