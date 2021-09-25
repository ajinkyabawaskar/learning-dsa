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
        ll solution = 0;
        ll N;
        cin >> N;

        ll maxOdd = 0, maxEven = 0;
        if (N % 2 == 0)
        {
            maxOdd = N / 2;
        }
        else
        {
            maxOdd = (N / 2) + 1;
        }
        maxEven = N - maxOdd;

        ll num;

        for (ll i = 0; i < N; i++)
        {
            cin >> num;
            if (num % 2 == 0)
            {
                // num is even
                if (maxOdd > 0)
                {
                    maxOdd--;
                    solution++;
                }
            }
            else
            {
                // num is odd
                if (maxEven > 0)
                {
                    maxEven--;
                    solution++;
                }
            }
        }

        cout << solution << endl;
    }

    return 0;
}