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
        ll n = 0;
        cin >> n;
        ll sum = 0;
        sum = (n*(n+1))/2;
        ll temp = 0, solution = 0;
        if (!(sum & 1)) 
        {
            double half = sum/2;
            double k = sqrt(8*half+1)/2 - 0.5;
            double deci, inti;
            deci = modf(k, &inti);
            solution = (ll) k;
            if (deci == 0)
            {
                temp = (((solution-1)* (solution))/2) + (((n-solution-1) * (n-solution))/2);
            }
            temp +=  (n-solution);            
        }
        solution = temp;
        cout << solution << endl;
    }
    return 0;
}