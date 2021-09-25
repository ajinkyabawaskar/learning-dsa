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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, mn = INT_MAX;
        ll solution = 0;
        cin >> n;
        ll arr[n];

        unordered_map<ll, ll> umap;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mn > arr[i])
            {
                mn = arr[i];
            }

            umap[arr[i]]++;
        }

        ll maxcount = -1;
        ll repeated;

        for (auto i : umap)
        {
            if (i.second > maxcount)
            {
                maxcount = i.second;
                repeated = i.first;
            }
        }

        if(repeated == mn) {
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] % repeated == 0 ) {
                    solution = n;
                    break;
                }
            }
            

        }
    }
}