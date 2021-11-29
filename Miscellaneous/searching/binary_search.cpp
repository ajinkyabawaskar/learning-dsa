#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int binarySearch(int arr[], int n, int needle)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == needle)
        {
            return mid;
        }
        else if (arr[mid] > needle)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

void solve()
{
    int arr[10] = {10, 11, 23, 345, 456, 568, 734, 976, 34, 90};
    sort(arr, arr + 10);

    int needle = 345;
    int index = binarySearch(arr, 10, needle);
    cout << index << endl;
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