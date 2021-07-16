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
        ll numOfCars = 0;
        cin >> numOfCars;
        ll speeds[numOfCars];
        ll solution = 0;
        for (ll i = 0; i < numOfCars; i++)
            cin >> speeds[i];

        ll maxSpeed = speeds[0];
        for (ll i = 0; i < numOfCars; i++)
        {
            if (speeds[i] <= maxSpeed)
            {
                solution++;
                maxSpeed = speeds[i];
            }
        }
        cout << solution << endl;
    }
    return 0;
}