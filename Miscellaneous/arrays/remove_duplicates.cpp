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
    int arr[10] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 6};
    unordered_map<int, int> map;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        map[arr[i]]++;
    }

    int newArr[map.size()];
    int index = 0;
    for (auto i : map)
    {
        newArr[index] = i.first;
        index++;
    }

    // print array without duplicates
    for (int i = 0; i < sizeof(newArr) / sizeof(newArr[0]); i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;
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