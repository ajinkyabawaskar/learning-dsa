#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, x, y;
        cin >> n >> p >> x >> y;
        ll solution = 0;

        for (ll i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i < p)
            {

                if (temp == 0)
                {
                    solution += x;
                }
                if (temp == 1)
                {
                    solution += y;
                }
            }
        }
        cout << solution << endl;
    }
}