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

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '-' && str[i + 1] == '-')
        {
            str[i] = '2';
            str[i + 1] = 'X';
        }

        if (str[i] == '-' && str[i + 1] == '.')
        {
            str[i] = '1';
            str[i + 1] = 'X';
        }
        if (str[i] == '.')
        {
            str[i] = '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] != 'X')
        {
            cout << str[i];
        }
    }

    cout << endl;
    return 0;
}