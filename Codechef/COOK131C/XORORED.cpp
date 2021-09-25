#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fast;
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        ll n = 0;
        cin >> n;
        ll max = 0;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            arr[i] ^= max;
        }
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            sum |= arr[i];
        }
        

        cout << max << " " << sum << endl;
    }

    return 0;
}