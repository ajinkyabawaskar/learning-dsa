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
        ll g, c;
        cin >> g >> c;

        ll solution = (c*c) / (2 * g);
        
        cout << solution << endl;
    }

    return 0;
}