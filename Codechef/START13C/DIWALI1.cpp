#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;

        ll maxAnar = p / (b + (a * x));
        ll maxChakri = p / (c + (a * y));

        if (maxAnar > maxChakri)
        {
            cout << maxAnar;
        }
        else
        {
            cout << maxChakri;
        }
        cout << endl;
    }
}