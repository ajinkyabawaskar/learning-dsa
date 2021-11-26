#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define MOD LLONG_MAX

ll mul(ll x, ll y)
{
    ll res = x * y;
    return (res >= MOD ? res % MOD : res);
};

ll power(ll x, ll y)
{
    ll res = 1;
    x %= MOD;
    while (y)
    {
        if (y & 1)
            res = mul(res, x);
        y >>= 1;
        x = mul(x, x);
    }
    return res;
}

ll lengthOf(ll x)
{
    return log10(x) + 1;
}

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    // sort the array
    sort(arr.begin(), arr.end());

    int solution = 0;

    for (auto y : arr)
    {
        ll len_y = log10(y) + 1;
        ll d = power(10ll, len_y);
        ll R = (r - y) / d;
        ll L = (l - y + d - 1ll) / d;
        solution += upper_bound(arr.begin(), arr.end(), R) - lower_bound(arr.begin(), arr.end(), L);
    }

    cout << solution << endl;
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