// Link of Problem
// https://leetcode.com/problems/number-of-1-bits/description/
#include <iostream>
using namespace std;
class Solution
{
public:
    // Solve by Right shift
    int hammingWeight(uint32_t n)
    {
        int oneBits = 0;
        while (n != 0)
        {
            if (n & 1)
                oneBits++;
            n = n >> 1;
        }
        return oneBits;
    }

    // Solve by Divide and mode
    int hammingWeightDivideAndMode(int n)
    {
        int oneBits = 0;
        while (n != 0)
        {
            int digit = n % 2;
            if (digit == 1)
                oneBits++;
            n /= 2;
        }
        return oneBits;
    }
};
int main()
{
    Solution obj;
    cout << obj.hammingWeight(11);
}