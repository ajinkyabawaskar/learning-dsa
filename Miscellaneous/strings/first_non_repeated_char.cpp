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
    string str = "ajinkya";
    unordered_map<char, int> hash;

    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(hash[str[i]] == 1) {
            cout << str[i] << endl;
            break;
        }
    }
    
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