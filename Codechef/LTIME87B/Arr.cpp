#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// Function to find largest sub
// array with all equal elements.
ll subarray(ll arr[], ll n)
{
    ll ans = 1, temp = 1;
    vector<ll> subs = {0};
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] == 0)
        {
            // If elemet is same as
            // previous increment temp value
            if (arr[i] == arr[i - 1])
            {
                ++temp;
            }
            else
            {
                ans = max(ans, temp);
                temp = 1;
            }
        }
    }

    // Return the required answer
    return ans;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll k = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                k++;
            }
        }
        if (k == n - 2)
        {
            if (k % 2 == 0)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        } else {

        }
    }
}