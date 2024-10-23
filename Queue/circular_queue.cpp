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
        front = -1;
        rear = -1;
    }
    void enqueue(int x)
    {
        if ((rear + 1) % N == front)
        {
            cout << "Overflow!" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            Queue[rear] = x;
        }
        else
        {
            rear = (rear + 1) % N;
            Queue[rear] = x;
        }
    }
    void dequeue()
    {
        if (front == -1)
            cout << "Underflow!" << endl;
        else if (front == rear)
            front = rear = -1;
        else
        {
            front = (front + 1) % N;
        }
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        int i = front;
        cout << "[";
        while (i != rear)
        {
            cout << Queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << Queue[rear] << "]" << endl;
    }
    int peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        return Queue[front];
    }
};
int main()
{
    Solution q;
    q.enqueue(84);
    q.enqueue(8);
    q.enqueue(14);
    q.display();
    q.dequeue();
    q.display();
}