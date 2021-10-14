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
        ll k;
        int d0, d1;
        cin >> k >> d0 >> d1;

        int s = d0 + d1;
        int c = ((2 * s) % 10) + ((4 * s) % 10) + ((8 * s) % 10) + ((6 * s) % 10);

        ll num_cycles = (k - 3) / 4;
        ll tot = 0;

        if (k == 2)
        {
            tot = s;
        }
        else
        {
            tot = s + (s % 10) + (c * 1LL * num_cycles);
            int left_over = (k - 3) - (num_cycles * 4);
            int p = 2;
            for (int i = 1; i <= left_over; i++)
            {
                tot += ((p * s) % 10);
                p = (p * 2) % 10;
            }
        }

        if ((tot % 3) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}