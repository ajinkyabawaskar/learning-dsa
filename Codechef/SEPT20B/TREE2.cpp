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
    int testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        ll N = 0;
        cin >> N;
        set<ll> s;
        ll temp = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> temp;
            if (temp != 0)
                s.insert(temp);
        }
        cout << s.size() << endl;
    }

    return 0;
}