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
    int arr[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6};
    unordered_map<int, int> map;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        map[arr[i]]++;
    }

    for (auto i : map)
    {
        if (i.second > 1)
        {
            cout << i.first << endl;
        }
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