#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int val;
    int pow;
    Node *next;
    Node(int val, int pow)
    {
        this->val = val;
        this->pow = pow;
        next = nullptr;
    }
};

void insertAtHead(int val, int pow, Node *&head)
{
    if (head == NULL)
    {
        Node *newnode = new Node(val, pow);
        head = newnode;
        return;
    }
    Node *newnode = new Node(val, pow);

    newnode->next = head;
    head = newnode;
}

Node *solve(Node *head1, Node *head2)
{

    Node *newnode = NULL;
    Node *temp = newnode;
    while (head1 != NULL && head2 != NULL)
    {
        int val1 = head1->val;
        int val2 = head2->val;
        if (head1->pow == head2->pow)
        {
            if (newnode == NULL)
            {
                newnode = new Node(val1+val2,head1->pow);
                temp = newnode;
            }
            else
            {
                temp->next = new Node(val1+val2, head1->pow);
                temp=temp->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        else if (head1->pow > head2->pow)
        {
            if (newnode == nullptr)
            {
                newnode = new Node(val1, head1->pow);
                temp = newnode;
            }
            else
            {
                temp->next = new Node(val1, head1->pow);
                temp=temp->next;
            }
            head1 = head1->next;
        }
        else
        {

            if (newnode == nullptr)
            {
                newnode = new Node(val2, head2->pow);
                temp = newnode;
            }
            else
            {
                temp->next = new Node(val2, head2->pow);
                temp=temp->next;
            }
            head2 = head2->next;
        }
    }
    while (head1 != NULL)
    {
        if (newnode == NULL)
        {
            newnode = new Node(head1->val, head1->pow);
            temp = newnode;
        }
        else
        {
            temp->next = new Node(head1->val, head1->pow);
            temp=temp->next;
        }
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        if (newnode == NULL)
        {
            newnode = new Node(head2->val, head2->pow);
            temp = newnode;
        }
        else
        {
            temp->next = new Node(head2->val, head2->pow);
            temp=temp->next;
        }
        head2 = head2->next;
    }

    return newnode;
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    reverse(head, curr->next, curr);

    curr->next = prev;
}

void printLL(Node *head)
{
    Node *temp = head;
    char ch='+';
    char ch2='-';
    while (temp != NULL)

    {
        cout << temp->val << "x^" << temp->pow<<" ";
   
        temp = temp->next;
    }
}

int main()
{
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    insertAtHead(5, 0, tail1);
    insertAtHead(-5, 1, tail1);
    insertAtHead(3, 2, tail1);

    printLL(tail1);
    cout << endl;
    insertAtHead(3,1,tail2);
    insertAtHead(2, 2, tail2);
    insertAtHead(3, 3, tail2);

    printLL(tail2);
    cout << endl;

    Node *ans = solve(tail1, tail2);
    Node *temp = ans;
    Node *prev = NULL;
    // reverse(ans, temp, prev);
    printLL(ans);

    return 0;
}
