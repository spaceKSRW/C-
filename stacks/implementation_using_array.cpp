#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val)
    {
        top++;
        if (top == size)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }
    bool isempty()
    {
        if (top < 0)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
   Stack st(9);
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   cout<<st.peek();
   cout<<"\n"<<st.size;
    return 0;
}