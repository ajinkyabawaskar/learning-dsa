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
    bool isRotation = false;
    string str = "abcdefg";
    string rotation = "defgabc";

    // brute force, check all rotations of str
    for (int i = 0; i < str.length(); i++)
    {
        // rotate at 0
        string temp = str.substr(i);
        temp += str.substr(0, i);
        if (temp == rotation)
        {
            isRotation = true;
            break;
        }
    }
    cout << isRotation << endl;
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