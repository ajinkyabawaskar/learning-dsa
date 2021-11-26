#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    bool isDigit = true;
    string str = "7058834841";
    for (int i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            isDigit = false;
            break;
        }
    }
    cout << isDigit << endl;
}

int32_t main()
{
    fast;
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}