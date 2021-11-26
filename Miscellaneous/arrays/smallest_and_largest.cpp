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
    int arr[10] = {-1, 2, 3, 4, 5, 6, 7, 8, 9, 3};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << smallest << endl;
    cout << largest << endl;
    
    
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