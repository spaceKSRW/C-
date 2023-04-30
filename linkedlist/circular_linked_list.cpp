#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_node(Node *&tail, int element, int val)
{
    if (tail == NULL)
    {
        Node *newnode = new Node(val);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non empty list
        // assuming that  the element is prosent in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node*temp=new Node(val);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print_node(Node* tail){
Node* temp=tail;
do {
    cout<<tail->data<<" ";
    tail=tail->next; 
}
while(tail!= temp);


}
int main()
{
   Node* tail=NULL;
   //insertion in emptty list
      insert_node(tail,3,5);
   insert_node(tail,5,3);
   insert_node(tail,3,7);

   print_node(tail);
    return 0;
}