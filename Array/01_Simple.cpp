#include <climits>
class Solution
{
public:
    int max(int arr[], int size)
    {
        int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
    int min(int arr[], int size)
    {
        int max = INT_MAX;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < max)
                max = arr[i];
        }
        return max;
    }
    int sum(int arr[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return sum;
    }
};