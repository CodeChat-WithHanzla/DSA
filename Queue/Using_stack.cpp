#include <iostream>
#include <stack>
#include <vector>
using namespace std;
const int N = 5;
class Solution
{
    int top1, top2, count;
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int x)
    {
        if (s1.size() == N )
        {
            cout << "Overflow!" << endl;
            return;
        }
        s1.push(x);
    }
    void dequeue()
    {
        if (s1.empty())
        {
            cout << "Underflow!" << endl;
            return;
        }
        while (!s1.empty())
        {
            int top = s1.top();
            s1.pop();
            s2.push(top);
        }
        s2.pop();

        while (!s2.empty())
        {
            int top = s2.top();
            s2.pop();
            s1.push(top);
        }
    }
    void display()
    {
        stack<int> s = s1;
        vector<int> r;
        while (!s.empty())
        {
            int top = s.top();
            r.push_back(top);
            s.pop();
        }
        cout << "[";
        for (int i = 0; i < r.size(); i++)
        {
            if (i != r.size() - 1)
                cout << r[i] << ",";
            else
                cout << r[i];
        }
        cout << "]" << endl;
    }
};
int main()
{
    Solution q;
    q.enqueue(34);
    q.enqueue(36);
    q.display();
    q.dequeue();
    q.display();
}