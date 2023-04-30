#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int val;
    Node*next;
};
class CLL{
    private: Node* head;
public:
  CLL(){
   head=nullptr;
  }
 void insert_at_head(int val){
    Node* new_node=new Node();
    new_node->next=head;
    new_node->val=val;
    if(head==nullptr){
        head=new_node;
        new_node->next=head;
        return;
    }
    Node* temp=head;
  while(temp->next!=head){
    temp=temp->next;
    }
  temp->next=new_node;
  new_node->next=head;
 }

 void printCLL(){
   Node*temp=head;
   do{
    cout<<temp->val<<"  ";
    temp=temp->next;
   }
   while(temp!=head);
cout<<temp->next->next->val;
 }


};
int main(){
CLL node;
node.insert_at_head(12);
node.insert_at_head(1);
// node.insert_at_head(78);
// node.insert_at_head(111);
node.printCLL();
return 0;
}