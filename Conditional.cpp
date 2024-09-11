#include <iostream>
#include <cmath>
using namespace std;
void characterSpecifier(char ch);
int sumOfEven(int n);
float fahrenheitToCelsius(int F);
bool isPrime(int n);

int main()
{
    bool is = isPrime(3);
    cout << is;
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
int sumOfEven(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
            sum += i;
        i++;
    }
    return sum;
}
float fahrenheitToCelsius(int F)
{
    float celsius = (5.0 / 9.0) * (F - 32);
    return celsius;
}

// If ( n ) has two divisors, say ( a ) and ( b ), such that ( a x b = n ), then one divisor will always be less than or equal to ( sqrt{n} ), and the other will be greater than or equal to ( sqrt{n} ).

// This is because if both ( a ) and ( b ) were greater than ( sqrt{n} ), their product ( a x b ) would exceed ( n ), which contradicts ( a x b = n ).

//  To break it down:
// - ( a x b = n )
// - If ( a <=  sqrt{n} ), then ( b >= sqrt{n} ) (and vice versa).

// By checking only up to ( sqrt{n} ), you're ensuring that you cover all possible factor pairs, since one factor will always be below or equal to ( sqrt{n} ).

bool isPrime(int n)
{
    if (n <= 0)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i + 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
