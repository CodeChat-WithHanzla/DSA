#include <iostream>
using namespace std;
const int N = 5;
class Solution
{
    int front, rear;
    int Queue[N];

public:
    Solution()
    {
        front = rear = -1;
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Overflow condition" << endl;
            return;
        }
        else if (isEmpty())
            front = rear = 0;
        else
            rear++;
        Queue[rear] = x;
    }
    void dequeue()
    {
        if (isEmpty())
            cout << "Underflow" << endl;
        else if (front == rear)
            front = rear = -1;
        else
            front++;
    }
    void display()
    {
        cout << "[";
        for (int i = front; i <= rear; i++)
            i == rear ? cout << Queue[i] : cout << Queue[i] << ",";
        cout << "]" << endl;
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Empty Queue!" << endl;
            return -1;
        }
        return Queue[front];
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return rear == N - 1;
    }
};
