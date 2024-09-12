#include <iostream>
using namespace std;
class Solution
{
public:
    void Pattern1UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << j << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern2UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            int j = n;
            while (j >= 1)
            {
                cout << j << " ";
                j--;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern3UsingWhile(int n)
    {
        int i = 0;
        int k = 1;
        while (i < n)
        {
            int j = 0;
            while (j < n)
            {
                cout << k << " ";
                k++;
                j++;
            }
            i++;
            cout << endl;
        }
    }
    void Pattern4UsingWhile(int n)
    {
        int k = n * n;
        int i = 0;
        while (i < n)
        {
            int j = 0;
            while (j < n)
            {
                cout << k << " ";
                k--;
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern5UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            int j = 0;
            while (j < i)
            {
                cout << "* ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern6UsingWhile(int n)
    {
        int i = 1;
        while (i <= n)
        {
            int j = 0;
            while (j < i)
            {
                cout << i << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern7UsingWhile(int n)
    {
        int i = 0;
        int k = 1;
        while (i < n)
        {
            int j = 0;
            while (j <= i)
            {
                cout << k << " ";
                k++;
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern8UsingWhile(int n)
    {
        int i = 1;
        int k = 1;
        while (i <= n)
        {
            int j = i;

            while (j < i * 2)
            {
                cout << j << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern9UsingWhile(int n)
    {
        int i = 1;
        while (i <= n)
        {
            int j = i;
            while (j > 0)
            {
                cout << j << " ";
                j--;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern10UsingWhile(int n)
    {
        char ch = 'A';
        int i = 0;
        while (i < n)
        {
            int j = 0;
            while (j < n)
            {
                cout << ch << " ";
                j++;
            }
            cout << endl;
            ch++;
            i++;
        }
    }
    void Pattern11UsingWhile(int n)
    {

        int i = 0;
        while (i < n)
        {
            char ch = 'A';
            int j = 0;
            while (j < n)
            {
                cout << ch << " ";
                j++;
                ch++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern12UsingWhile(int n)
    {
        int i = 0;
        char ch = 'A';
        while (i < n)
        {
            int j = 0;
            while (j < n)
            {
                cout << ch << " ";
                ch++;
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern13UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            int j = 0;
            char ch = i + 'A';
            while (j < n)
            {
                cout << ch << " ";
                ch++;
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern14UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            char ch = i + 'A';
            int j = 0;
            while (j <= i)
            {
                cout << ch << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern15UsingWhile(int n)
    {
        int i = 0;
        char ch = 'A';
        while (i < n)
        {
            int j = 0;
            while (j <= i)
            {
                cout << ch << " ";
                j++;
                ch++;
            }
            cout << endl;
            i++;
        }
    }
    void Pattern16UsingWhile(int n)
    {
        int i = 0;
        while (i < n)
        {
            int j = 0;
            char ch = 'A' + i;
            while (j <= i)
            {
                cout << ch << " ";
                ch++;
                j++;
            }

            cout << endl;
            i++;
        }
    }
};
int main()
{
    Solution obj;
}