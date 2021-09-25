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
        ll a, b, c, d, e;
        char *solution = "NO";
        cin >> a >> b >> c >> d >> e;

        if (a + b <= d && c <= e)
        {
            solution = "YES";
        }
        else if (b + c <= d && a <= e)
        {
            solution = "YES";
        }
        else if (c + a <= d && b <= e)
        {
            solution = "YES";
        }

        cout << solution << endl;
    }

    return 0;
}