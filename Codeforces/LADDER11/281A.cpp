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

    if ((int)str[0] > 96 && (int)str[0] < 123)
    {
        str[0] -= 32;
    }

    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }

    return 0;
}