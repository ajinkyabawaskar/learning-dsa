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
        ll laddus = 0;
        ll activities = 0;
        string activity, origin;
        ll severity = 0;
        ll rank = 0;
        cin >> activities >> origin;
        for (ll i = 0; i < activities; i++)
        {
            cin >> activity;
            if (activity == "CONTEST_WON")
            {
                cin >> rank;
                ll bonus = (rank < 20) ? (20 - rank) : 0;
                laddus += (300 + bonus);
            }
            if (activity == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            if (activity == "BUG_FOUND")
            {
                cin >> severity;
                laddus += severity;
            }
            if (activity == "CONTEST_HOSTED")
            {
                laddus += 50;
            }
        }
        int factor = (origin == "INDIAN") ? 200 : 400;
        cout << laddus / factor << endl;
    }

    return 0;
}