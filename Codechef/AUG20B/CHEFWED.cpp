#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fast;
    ll testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll numOfGuests, costPerTable;
        cin >> numOfGuests >> costPerTable;

        ll guest[numOfGuests + 1];
        for (ll i = 0; i < numOfGuests; i++)
        {
            cin >> guest[i];
        }

        ll col[numOfGuests + 1][numOfGuests + 1] = {0};
        for (ll i = 0; i < numOfGuests; i++)
        {
            for (ll j = 0; j < numOfGuests; j++)
            {
                col[i][j] = 0;
            }
        }

        // Family -> count of numOfGuests from that family
        map<ll, ll> guestsFromFamily;
        for (ll i = 0; i < numOfGuests; i++)
        {
            guestsFromFamily.clear();
            for (ll j = i; j < numOfGuests; j++)
            {
                if (j == 0)
                {
                    col[i][j] = 0;
                }
                else
                {
                    col[i][j] = col[i][j - 1];
                }
                if (guestsFromFamily.count(guest[j]))
                {
                    if (guestsFromFamily[guest[j]] == 1)
                    {
                        col[i][j]++;
                    }
                    col[i][j]++;
                }
                guestsFromFamily[guest[j]]++;
            }
        }

        ll inefficiency = 1e18;
        ll table = 100;

        ll conflicts[101][1001] = {0};
        for (ll i = 0; i <= table; i++)
        {
            for (ll j = 0; j <= table; j++)
            {
                conflicts[i][j] = 0;
            }
        }

        for (ll i = 0; i < numOfGuests + 1; i++)
        {
            conflicts[1][i] = col[0][i - 1];
        }

        for (ll i = 2; i <= table; i++)
        {
            conflicts[i][1] = 0;
        }

        for (ll i = 2; i <= table; i++)
        {
            for (ll j = 2; j <= numOfGuests; j++)
            {
                ll best = 1e18;
                for (ll p = 1; p < j; p++)
                {
                    best = min(best, conflicts[i - 1][p] + col[p][j - 1]);
                }
                conflicts[i][j] = best;
            }
        }

        for (table = 1; table <= 100; table++)
        {
            inefficiency = min(table * costPerTable + conflicts[table][numOfGuests], inefficiency);
        }

        cout << inefficiency << endl;
    }
}