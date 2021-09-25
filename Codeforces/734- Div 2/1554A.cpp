#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll left, right;
        ll ans = -1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                left = i;
                right = j;

                ll thismin = INT_MAX, thismax = INT_MIN;
                for (ll x = left; x <= right; x++)
                {
                    // cout << arr[x] << " ";
                    if (arr[x] > thismax)
                    {
                        thismax = arr[x];
                    }
                    if (arr[x] < thismin)
                    {
                        thismin = arr[x];
                    }
                }
                // cout << endl;
                // cout << "---------- min " << thismin << " ----- max " << thismax << " max * min = " << thismin * thismax << endl;
                if (thismin * thismax > ans)
                {
                    ans = thismin * thismax;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}