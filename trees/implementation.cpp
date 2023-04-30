#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;

     }


};
Node* buildtree(Node* root){
    int data;
    cout<<"\n Enter data";
    cin>>data;
    
    if(data==-1) return NULL;

    root=new Node (data);
    
    cout<<"for left subtree"<<endl;
    buildtree(root->left);

    cout<<"for right subtree"<<endl;
    buildtree(root->right);
    
    return root;
}

int main(){
Node* root=NULL;
root=buildtree(root);
return 0;
}