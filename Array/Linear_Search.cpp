#include <iostream>
using namespace std;
class Solution
{
public:
    bool linearSearch(int arr[], int size, int target)
    {
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
                return true;
        }
        return false;
    }
};
