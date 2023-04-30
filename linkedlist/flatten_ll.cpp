#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *down;
    Node(int val)
    {
        data = val;
        next = NULL;
        down = NULL;
    }
};
void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
Node *merge(Node *node1, Node *node2)
{
    if (node1 == NULL)
        return node2;
    if (node2 == NULL)
        return node1;
    Node *ans = new Node(-1);
    Node *temp = ans;
    while (node1 != NULL && node2 != NULL)
    {
        if (node1->data < node2->data)
        {
            temp->down = node1;
            temp = node1;
            node1 = node1->down;
        }
        else
        {
            temp->down = node2;
            temp = node2;
            node2 = node2->down;
        }
    }
    while (node1 != NULL)
    {
        temp->down = node1;
        temp = node1;
        node1 = node1->down;
    }
    while (node2 != NULL)
    {
        temp->down = node2;
        temp = node2;
        node2 = node2->down;
    }
    return ans->down;
}
Node *flatten_list(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    head->next = flatten_list(head->next);
    head = merge(head, head->next);
    return head;
}
void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->down;
    }
    cout << endl;
}
void printbll(Node *&head)
{
    Node *temp1 = head;
    Node* temp2=head;
    while (temp1->next != NULL)
    {
       
        while (temp2 != NULL)
        {
            cout << temp2->data << " ";
            temp2=temp2->down;
        }

            temp1=temp1->next;
            temp2 = temp1;
        
       
    }
}
int main()
{ // CREATING NODE
    Node *head = new Node(1);
    insert_at_head(head, 9);
    // CREATING DOWN LINKED LIST AT 9 = (9-11-10)
    head->down = new Node(11);
    head->down->down = new Node(10);

    insert_at_head(head, 3);
    head->down = new Node(122);
    head->down->down = new Node(123);
    head->down->down->down = new Node(124);

    insert_at_head(head, 7);

    insert_at_head(head, 8);
    head->down = new Node(89);
    Node *ans = flatten_list(head);
    printbll(head);
    cout<<endl;
    printll(ans);

    return 0;
}