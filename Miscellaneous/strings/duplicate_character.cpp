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
    string str = "repeated chars";
    unordered_map<char, int> hash;

    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i]]++;
    }

    for (auto i : hash)
    {
        if (i.second > 1)
            cout << i.first << " ";
    }
}

int32_t main()
{
    fast;
    ll testCases = 1;
    while (testCases--)
    {
        solve();
    }
    return 0;
}