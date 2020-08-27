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
        ll g;
        cin >> g;
        while (g--)
        {
            ll i, n, q;
            cin >> i >> n >> q;
            if (n % 2)
            {
                if (i == q)
                {
                    cout << (n - 1) / 2 << endl;
                }
                else
                {
                    cout << ((n - 1) / 2) + 1 << endl;
                }
            }
            else
                cout << (n / 2) << endl;
        }
    }

    return 0;
}