#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
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
        ll d, x, y , z;
        cin >> d >> x >> y >> z;

        ll w1 = 7 * x;
        ll w2 = (d * y) + ((7-d) * z);

        ll ans = max(w1, w2);
        cout << ans << endl;

    }

    return 0;
}