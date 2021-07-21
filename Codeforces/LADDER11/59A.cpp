#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int n = input.length();
    char str[n];
    input.copy(str, n, 0);

    int lower = 0;
    int upper = 0;

    for (int i = 0; i < n; i++)
    {
        if ((int)str[i] > 64 && (int)str[i] < 91)
            upper++;
        if ((int)str[i] > 96 && (int)str[i] < 123)
            lower++;
    }

    if (upper > lower)
    {
        for (int i = 0; i < n; i++)
        {
            if ((int)str[i] > 96 && (int)str[i] < 123)
            {
                str[i] -= 32;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((int)str[i] > 64 && (int)str[i] < 91)
            {
                str[i] += 32;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }

    return 0;
}