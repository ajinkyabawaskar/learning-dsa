#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int linearSearch(int arr[], int needle) {
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == needle) {
            return i;
        }
    }
    return -1;
    
}

void solve()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int index = -1;

    index = linearSearch(arr, 5);
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