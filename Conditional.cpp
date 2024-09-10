#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << "Lower Case" << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Upper Case" << endl;
    else if (ch >= '1' && ch <= '9')
        cout << "Numeric Character" << endl;
    else
        cout << "Unknown to me ! " << endl;
}