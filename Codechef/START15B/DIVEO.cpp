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
    ll n, a, b;
    cin >> n >> a >> b;

    ll even = 0;
    ll odd = 0;

    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            (i % 2 == 0 ? even : odd)++;
        }
    }
    if (n > 1)
        (n % 2 == 0 ? even : odd)++;

    ll ans;

    if (a >= 0 and b >= 0)
        ans = (even * a) + (odd * b);
    if (a >= 0 and b < 0)
        ans = (even > 0 ? even * a : b);
    if (a < 0 and b >= 0)
        ans = (odd * b) + (even > 0 ? a : 0);
    if (a < 0 and b < 0)
        ans = (even ? a : b);
        
    cout << ans << endl;
}

int main()
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