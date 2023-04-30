#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *right;
    Node *left;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

class BST
{
private:
    Node *newNode;
public:
    Node *insertBST(Node * root, int val)
    {
        if (root == NULL)
        {
            newNode = new Node(val);
            root=newNode;
            return root;
        }
        else if (root->val > val)
        {
            root->left = insertBST(root->left, val);
        }
        else
        {
            root->right = insertBST(root->right, val);
        }
    }

    void printBST(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        printBST(root->left);
        cout << root->val<<" ";
        printBST(root->right);
    }
};

int main()
{
    BST tree;
    Node* root=NULL;
    root = tree.insertBST(root, 12);
     root = tree.insertBST(root, 100);
      root = tree.insertBST(root, 45);
       root = tree.insertBST(root, 1);
        // root = tree.insertBST(root, 3);
        tree.printBST(root);
    return 0;
}