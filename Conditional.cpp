#include <iostream>
using namespace std;
void characterSpecifier(char ch);
int sumOfEven(int n);
float fahrenheitToCelsius(int F);

int main(){

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
