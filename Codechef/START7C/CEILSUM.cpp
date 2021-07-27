

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        double a, b;
        cin >> a >> b;
        ll x = ((a + b) / 2);
        ll sol;
        if (a == b)
            sol = 0;
        else if (a > b)
            sol = (ceil((b - (a - 1)) / 2) + ceil(((a - 1) - a) / 2));
        else
        {
            sol = (ceil((b - (a + 1)) / 2) + ceil(((a + 1) - a) / 2));
        }
        cout << sol << endl;
    }
    return 0;
}