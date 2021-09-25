#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n - 1];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n - 1; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n - 1);
        map<ll, ll> mp;

        for (ll i = 0; i < n - 1; i++)
        {
            ll m1 = b[i] - a[i];
            ll m2 = b[i] - a[i + 1];
            if (m1 != m2)
            {
                if (m1 > 0)
                {
                    mp[m1] += 1;
                }

                if (m2 > 0)
                {
                    mp[m2] += 1;
                }
            }
            else
            {
                if (m1 > 0)
                {
                    mp[m1] += 1;
                }
            }
        }

        for (auto i : mp)
        {
            cout << i.first << " ---- " << i.second << endl;
            // if (i.second == n - 1)
            // {
            //     cout << i.first << endl;
            //     break;
            // }
        }
    }
}