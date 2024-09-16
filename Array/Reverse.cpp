#include <iostream>
using namespace std;
class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int reverse(int arr[], int size)
    {
        int start = 0;
        int end = size - 1;
        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};
