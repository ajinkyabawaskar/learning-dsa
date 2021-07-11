#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        ll maxProfit = 0;
        while (n--)
        {
            ll s, v, p;
            cin >> s >> p >> v;

            ll customers = p / (s + 1);
            ll currentProfit = v * customers;

            maxProfit = (currentProfit > maxProfit) ? currentProfit : maxProfit;

        }
        cout << maxProfit << endl;
    }
    return 0;
}
