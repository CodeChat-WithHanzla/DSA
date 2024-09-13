#include <iostream>
#include <cmath>
class Solution
{
public:
    int reverse(int x)
    {
        int reverseInt = 0;
        while (x != 0)
        {
            int digit = x % 10;
            reverseInt = reverseInt*10 + digit;
            x/=10;
        }
        return reverseInt;
    }
};
