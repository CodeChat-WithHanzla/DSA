#include <iostream>
#include <climits>
class Solution
{
public:
    int reverse(int x)
    {
        int reverseInt = 0;

        while (x != 0)
        {
            if (reverseInt > INT_MAX / 10 || reverseInt < INT_MIN / 10)
                return 0;
            int digit = x % 10;
            reverseInt = reverseInt * 10 + digit;
            x /= 10;
        }
        return reverseInt;
    }
};
