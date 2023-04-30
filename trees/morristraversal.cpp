#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val; 
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void morrisTraversal(Node*root){
    if(root==NULL)return ;
    Node*current=root;
    Node*pre;
    while(current){
        if(current->left==NULL){
            cout<<current->val<<" ";
            current=current->right;
        }
        else{
            pre=current->left;
            while(pre->right!=NULL && pre->right!=current){
                pre=pre->right;
            }
            if(pre->right==NULL){
                pre->right=current;
                current=current->left;
            }
            else{
                pre->right=NULL;
                cout<<current->val<<" ";
                current=current->right;
            }
        }
    }
}
int main()
{
    Node* root=new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    morrisTraversal(root);
    return 0;
}


