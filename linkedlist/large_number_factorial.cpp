#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
    }
};
void print(Node* tail){
if(tail==NULL) return;

print(tail->prev);

cout<<tail->data<<" ";
}
void multiply(Node *&tail, int n)
{
    int carry = 0;
    Node *temp = tail;
    Node *prevNode = tail;
    while (temp != NULL)
    {
        int data = temp->data * n + carry;
        temp->data = data % 10;
        carry = data / 10;
        prevNode = temp;
        temp = temp->prev;
    }
    while (carry != 0)
    {
        prevNode->prev = new Node(carry % 10);
        carry /= 10;
        prevNode = prevNode->prev;
    }
}
int main()
{
    Node *tail = new Node(1);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        multiply(tail, i);
    }
    print(tail);
    return 0;
}