#include <iostream>
using namespace std;
class Solution
{
public:
    // Not a good approach
    // int unique(int arr[], int size)
    // {
    //     int response;
    //     for (int i = 0; i < size; i++)
    //     {
    //         int count = 0;
    //         for (int j = 0; j < size; j++)
    //             if (arr[i] == arr[j])
    //                 count++;
    //         if (count == 1)
    //             response = arr[i];
    //     }
    //     return response;
    // }
    // Optimize Approach
    int unique(int arr[], int size)
    {
        int response = 0;
        for (int i = 0; i < size; i++)
        {
            response ^= arr[i];
        }
        return response;
    }
};
int main()
{
    Solution obj;
    int arr[] = {2, 3, 1, 6, 3, 6, 2};
    int size = 7;
    cout << obj.unique(arr, size);
}