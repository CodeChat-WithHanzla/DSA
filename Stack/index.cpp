#include <iostream>
using namespace std;
const int Max = 5;
class Stack
{
    int top;
    int stack[Max];

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top == Max - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        stack[++top] = value;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Empty stack" << endl;
            return 0;
        }
        return stack[top];
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Empty stack" << endl;
            return;
        }
        cout << "[";
        for (int i = top; i >= 0; i--)
            i == 0 ? cout << stack[i] : cout << stack[i] << ",";
        cout << "]" << endl;
    }
};
