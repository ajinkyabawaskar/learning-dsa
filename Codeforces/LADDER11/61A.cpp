#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    string line1;
    getline(cin, line1);

    string line2;
    getline(cin, line2);

    ll n = line1.length();

    char str1[n];
    line1.copy(str1, n, 0);

    char str2[n];
    line2.copy(str2, n, 0);

    for (ll i = 0; i < n; i++)
    {
        if (str1[i] == str2[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}