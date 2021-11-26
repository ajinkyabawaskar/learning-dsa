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
    int arr[10] = {1, 2, 3, 3, 4, 5, 9, 7, 8, 9};
    int sum = 6;
    int count = 0;

    // O(n^2)
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if ((arr[i] + arr[j] == sum) && arr[i] != arr[j])
            {
                count++;
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    cout << count << endl;

    count = 0;
    // O(n)
    unordered_map<int, int> map;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        map[arr[i]]++;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int second = sum - arr[i];
        if (map.find(second) == map.end())
        {
            count++;
        }
    }
    cout << count << endl;
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