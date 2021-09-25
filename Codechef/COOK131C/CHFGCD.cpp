#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll x = 0;
        ll y = 0;
        cin >> x >> y;

        ll solution = 0;

        if (__gcd(x, y) == 1)
        {
            int numberOfEvens = 0;
            if (x % 2 == 0)
            {
                numberOfEvens++;
            }
            if (y % 2 == 0)
            {
                numberOfEvens++;
            }

            if (numberOfEvens == 1)
            {
                solution = 1;
            }
            else
            {
                ll nextX = x + 1;
                ll nextY = y + 1;

                if (__gcd(nextX, y) != 1 or __gcd(x, nextY) != 1)
                {
                    solution = 1;
                }
                else
                {
                    solution = 2;
                }
            }
        }

        cout << solution << endl;
    }

    return 0;
}