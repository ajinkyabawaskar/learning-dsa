#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void countSort(int arr[], int n)
{
    int count[n] = {0};
    int k = arr[0];

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        k = max(k, arr[i]);
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    int b[n] = {0};
    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}

void solve()
{
    int arr[10] = {9, 8, 7, 7, 5, 8, 3, 2, 2, 0};
    countSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
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