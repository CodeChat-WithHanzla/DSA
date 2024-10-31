#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int array[size] = {5, 3, 2, 1};
    // Insertion at position 3 without losing the element at position 3
    // Note : position = index + 1
    int pos;
    cout << "Position of Insertion : ";
    cin >> pos;
    int val;
    cout << "Value of Insertion : ";
    cin >> val;
    while (pos < 0 || pos > size)
    {
        cout << "Out of Boundaries of the Array , please enter the position between 0 and " << size + 1 << endl;
        cin >> pos;
    }
    for (int i = size - 1; i >= pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos] = val;
    cout << "Updated Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}