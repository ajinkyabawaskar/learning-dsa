#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    ll T, N, K;
    fast;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        // declare an array to store the incoming guests
        ll a[N + 1];
        map<ll, ll> tableCount;

        // can't find explaination
        ll ans = 0, vc = 0, t = 1;

        // input all the guests to the table
        for (ll i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        // can't find explaination
        ll col[N + 1][N + 1] = {0};

        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < N; j++)
            {
                col[i][j] = 0;
            }
        }

        for (ll i = 0; i < N; i++)
        {
            tableCount.clear();
            for (ll j = 0; j < N; j++)
            {
                if (j == 0)
                {
                    col[i][j] = 0;
                }
                else
                {
                    col[i][j] = col[i][j - 1];
                }

                if (tableCount.count(a[j]))
                {
                    if (tableCount[a[j]] == 1)
                    {
                        col[i][j]++;
                    }
                    col[i][j]++;
                }
                tableCount[a[j]]++;
            }
        }
        ans = 1e18;
        // maximum families = 100, therefore one from each family can sit on the table
        // without a fight occurring
        ll table = 100;
        // a two dimensional array to store the results of previous calculations
        // first index is the family name second index is the person
        ll dp[101][1001] = {0};

        for (int i = 0; i <= table; i++)
        {
            for (ll j = 0; j < table; j++)
            {
                dp[i][j] = 0;
            }
        }
        for (ll i = 0; i < N + 1; i++)
        {
            dp[1][i] = col[0][i - 1];
        }
        for (ll i = 2; i < table; i++)
        {
            dp[i][1] = 0;
        }
        for (ll i = 2; i < table; i++)
        {
            for (ll j = 2; j < table; j++)
            {
                ll best = 1e18;
                for (ll p = 1; p < j; p++)
                {
                    best = min(best, dp[i - 1][p] + col[p][j - 1]);
                }
                dp[i][j] = best;
            }
        }
        for (table = 1; table<=100; table++)
        {
            ans = min(table*K + dp[table][N] , ans);
        }

        cout << ans << endl;
        
    }
    return 0;
}