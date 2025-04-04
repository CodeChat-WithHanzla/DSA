// Longest word in a sentence
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the sentence : ";
    getline(cin, str);
    cout << "Calculating the Longest word in the sentence ....." << endl;
    cout << "__________________________________________________" << endl;
    int maxLength = 0, currentLength = 0, maxStart = 0, currentStart = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            if (currentLength == 0)
                currentStart = i;
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 0;
        }
    }
    if (currentLength > maxLength)
    {
        maxLength = currentLength;
        maxStart = currentStart;
    }
    cout << "The Longest word in the provided sentence is follow with total length of " << maxLength << " characters : " << endl;
    for (int i = maxStart; i < (maxStart + maxLength); i++)
        cout << str[i];
}