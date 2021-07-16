#include <iostream>
#include <cmath>
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
        ll n = 0, k = 0;
        cin >> n >> k;
        ll arr[n];
        ll max = -1;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
        }

        ll operations = 0;
        ll limit = ceil(log2(max)) + 1;


        for (ll p = 0; p < limit; p++)
        {
            ll count = 0;
            ll power = pow(2, p);
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] == 0) {
                    continue;
                }

                if ((arr[i] & power) == power)
                {
                    arr[i] ^= power;
                    count++;
                }
            }
            operations += ceil((float)count/(float)k);
        }
        cout << operations << endl;
    }

    return 0;
}