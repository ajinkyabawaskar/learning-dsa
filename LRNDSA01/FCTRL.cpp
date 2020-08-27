#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// Function to return trailing 0s in factorial of n
ll findTrailingZeros(ll n)
{
    ll count = 0;
    // Keep dividing n by powers of 5  and update count
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int main()
{
    fast;
    ll numOfNums = 0;
    cin >> numOfNums;
    while (numOfNums--)
    {
        ll num = 0;
        cin >> num;
        cout << findTrailingZeros(num) << endl;
    }
    return 0;
}