#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void permute(string a, int l, int r)
{
    if (l == r)
    {
        cout << a << endl;
    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(a[l], a[i]);
            // Recursion called
            permute(a, l + 1, r);
            //backtrack
            swap(a[l], a[i]);
        }
    }
}

void solve()
{
    string str = "ajinkya";
    permute(str, 0, str.length() - 1);
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