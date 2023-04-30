#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
// PRINTING DOUBLY LL
void print(Node *&head, Node *&tail)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Head is : " << head->data << " tail is : " << tail->data << endl;
}
// PRINTING LENGTH
int get_length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
// INSERTION AT HEAD
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_tail(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insert_at_position(Node *&tail, Node *&head, int d, int position)
{
    Node *temp = head;
    int count = 1;
    if (position == 1)
    {
        insert_at_head(head, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(tail, d);
        return;
    }

    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
// DELETION IN DLL
void delete_node(Node *&tail, Node *&head, int pos)
{
    // deletion at first node
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int counter = 1;
        while (counter < pos )
        {
            prev = curr;
            curr = curr->next;
            counter++;
        }
        if (curr->next == NULL)
        {
            prev->next = NULL;
            tail = prev;
            delete curr;
        }
        else
        {
            prev->next = curr->next;
            curr->next->prev = prev;
            delete curr;
        }
    }
}
int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    insert_at_head(head, 12);
    print(head, tail);
    insert_at_head(head, 1);
    print(head, tail);
    insert_at_tail(tail, 19);
    print(head, tail);
    insert_at_position(tail, head, 15, 5);
    print(head, tail);
    delete_node(tail, head, 5);
    print(head, tail);
    return 0;
}