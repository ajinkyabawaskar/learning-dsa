#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
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
                cout << ans << " ";
                temp = 1;
            }
        }
        for (auto ir = subs.cbegin(); ir != subs.cend(); ++ir)
            cout << *ir << " ";
    }

    // Return the required answer
    return ans;
}

int main()
{
    fast;
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        ll N = 0;
        cin >> N;
        ll arr[N] = {0};
        for (ll i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        ll input = subarray(arr, N);
    }

    return 0;
}