// Link Of Problem
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    // using while loop
    int subtractProductAndSum(int n)
    {
        int sum = 0, product = 1;
        while (n != 0)
        {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
        return product - sum;
    }
    // using for loop
    int subtractProductAndSum(int n)
    {
        int sum = 0, product = 1;
        for (int i = n; i != 0; i /= 10)
        {
            sum += i % 10;
            product *= i % 10;
        }
        return product-sum;
    }
};
