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
        ll a, b;
        cin >> a >> b;

        int sum = a + b;

        if(sum < 3) {
            cout << 1;
        }
        else if (sum >= 3 && sum <= 10) {
            cout << 2;
        }
        else if (sum >= 11 && sum <= 60) {
            cout << 3;
        }
        else {
            cout << 4;
        }

        cout  << endl;
    }

    return 0;
}