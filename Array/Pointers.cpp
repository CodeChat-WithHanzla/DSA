#include <iostream>
using namespace std;
int main()
{
    // array name is itself a pointer
    int size = 5;
    int arr[size];
    int *q = arr;
    cout << "Enter elements of the array : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> *(q + i);
    // }
    for (int i = 0; i < size; i++)
    {
        cin >> i[arr];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(q + i) << " ";
    // }
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    // & address of operator
    // * de-refrence operator
    int b = 5;
    int *a = &b;
    cout << a << endl;  // hexa-decimal address
    cout << *a << endl; // value at which pointer is pointing
}