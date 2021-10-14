#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
#define endl "\n"
using namespace std;

struct comparator
{
    bool operator()(const pair<ll, ll> &v1, const pair<ll, ll> &v2) const
    {
        return v1.second == v2.second ? v1.first < v2.first : v2.second < v1.second;
    }
};

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<pair<ll, ll>> candy(n);
        for (ll i = 0; i < n; i++)
            cin >> candy[i].first;

        for (ll i = 0; i < n; i++)
            cin >> candy[i].second;

        sort(candy.begin(), candy.end());

        ll ans = 0;
        multiset<pair<ll, ll>, comparator> mset;

        ll l = 0;
        for (ll r = n - 1; r >= 0; r--)
        {
            while (l < r and candy[l].first + candy[r].first <= d)
            {
                mset.insert(candy[l++]);
            }

            auto it = mset.find(candy[r]);

            if (l > r and it != mset.end())
            {
                mset.erase(it);
            }

            auto [cost1, sweet1] = mset.empty() ? make_pair(0ll, 0ll) : *mset.begin();
            auto [cost2, sweet2] = candy[r];

            if (cost1 + cost2 <= d)
            {
                ans = max(ans, sweet1 + sweet2);
            }
        }

        cout << ans << endl;
    }

    return 0;
}