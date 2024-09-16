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
    void swap_alternative(int arr[], int size)
    {
        for (int i = 0; i < size; i += 2)
        {
            if (i == size - 1)
                return;
            swap(arr[i], arr[i + 1]);
        }
    }
};
int main()
{
    Solution obj;
    int arr[] = {1, 2, 3, 4, 5};
    obj.swap_alternative(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}