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
        ll sum = 0;

        ll n = 0;
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        int stop = n;

        while (arr[0] != 0)
        {
            ll smallest = arr[0];
            for (ll i = 0; i < stop; i++)
            {
                // obtain smallest
                if(arr[i] <= smallest) {
                    smallest = arr[i];
                }
            }

            // add number of balls
            sum += smallest * stop;

            // reduce capacity
            for (ll i = 0; i < stop; i++)
            {
                arr[i] -= smallest;
            }
            
            // calculate next stop
            for (ll i = 0; i < stop; i++)
            {
                if (arr[i] == 0)
                {
                    stop = i;
                    break;
                }
                
            }  

        }
        cout << sum << endl;
    }
    return 0;
}