#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

string my_reverse(string str) {
    if (str.length() < 2) {
         return str;
    }
    else {
        char first = str[0];
        return my_reverse(str.substr(1)) + first;
    }
}

void solve()
{
    string str = "ajinkya";
    string reversed = my_reverse(str);
    cout << reversed << endl;
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