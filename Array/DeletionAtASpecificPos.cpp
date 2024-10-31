#include <iostream>
using namespace std;
class Solution
{
public:
    void deleteFromArray(int array[], int &size)
    {
        int pos;
        cout << "Enter the position for deletion : ";
        cin >> pos;
        for (int i = pos - 1; i <= size; i++)
            array[i] = array[i + 1];
        size--;
    }
};
int main()
{
    Solution arr;
    int size = 5;
    int array[size] = {1, 2, 3, 4, 5};
    arr.deleteFromArray(array, size);
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}