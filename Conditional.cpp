#include <iostream>
using namespace std;
void characterSpecifier(char ch);
void sumOfEven(int n);

int main()
{

    int n = 10;
    sumOfEven(n);
}

void characterSpecifier(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        cout << "Lower Case" << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Upper Case" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "Numeric Character" << endl;
    else
        cout << "Unknown to me ! " << endl;
}
void sumOfEven(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
            sum += i;
        i++;
    }
    cout << "Sum of even numbers from 1" << " to " << n << " is : " << sum << endl;
}