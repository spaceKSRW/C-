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
void insert_from_head(Node *&head, int element)
{
    if (head == NULL)
    {
        Node *newnode = new Node(element);
        head = newnode;
        return;
    }
    Node *newnode = new Node(element);
    newnode->next = head;
    head = newnode;
}
void printll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void reversell(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nex = NULL;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    head = prev;
}
Node *addition(Node *head1, Node *head2)
{
    int carry = 0;
    int digit = 0;
    Node *resulthead = NULL;
    while (head1!= NULL || head2 != NULL || carry != 0)
    {
        int val1 = 0;
        if (head1 != NULL)
        {
            val1 = head1->data;
        }
        int val2 = 0;
        if (head2 != NULL)
        {
            val2 = head2->data;
        }

        int sum = val1 + val2 + carry;
        digit = sum % 10;
        insert_from_head(resulthead, digit);
        carry = sum / 10;
        if (head1 != NULL)
        {
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            head2 = head2->next;
        }
    }
    return resulthead;
}
Node *addlinkedlist(Node *head1, Node *head2)
{
    // step1 reverse lnked list

    reversell(head1);
    reversell(head2);

    // add 2 linked list

    Node *ans = addition(head1, head2);

    // reverse the answer linked list

    // reversell(ans);

    // return answer

    return ans;
}

int main()
{
    Node *head = NULL;
    insert_from_head(head, 3);
    insert_from_head(head, 6);

    Node *head2 = NULL;
    insert_from_head(head2, 7);
    //insert_from_head(head2, 9);
    //insert_from_head(head2, 9);

    printll(head);
    cout << endl;
    printll(head2);
    Node *ans = addlinkedlist(head, head2);
    cout<<endl;
    printll(ans);
    return 0;
}