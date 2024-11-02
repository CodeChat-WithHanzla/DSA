#include <iostream>
using namespace std;
class Solution
{
public:
    int count = 1;
    // Complete this function
    void printNos(int n)
    {
        // Your code here
        if (count > n)
            return;

        cout << count << " ";
        count++;
        printNos(n);
    }
};