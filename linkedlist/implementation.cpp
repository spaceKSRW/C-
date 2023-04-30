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
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// PRINTING LINKED LIST AT ANY POSITION
void insert_at_pos(Node *&tail, Node *&head, int position, int d)
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
    temp->next = newnode;
}
// PRINTING LINKED LIST
void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// DELETION LINKED LIST

void delete_node(int position, Node *&head, Node *&tail)
{
    // DELETION AT HEAD
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;

        delete curr;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    insert_at_tail(tail, 12);
    insert_at_head(head, 13);
    insert_at_tail(tail, 67);
    insert_at_head(head, 11);
    insert_at_tail(tail, 190);
    insert_at_pos(tail, head, 7, 69);
    print_LL(head);
    delete_node(6, head, tail);
    print_LL(head);
    return 0;
}