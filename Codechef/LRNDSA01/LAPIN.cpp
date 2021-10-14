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
        string givenString = "";
        cin >> givenString;
        ll givenStringLength = givenString.length();
        unordered_map<ll, ll> left, right;
        if (givenStringLength % 2 == 0)
        {
            for (ll i = 0; i < (givenStringLength/2); i++)
            {
                left[givenString[i]]++;
            }
            for (ll i = (givenStringLength/2); i < givenStringLength; i++)
            {
                right[givenString[i]]++;
            }
        }
        else
        {
            for (ll i = 0; i < (givenStringLength/2); i++)
            {
                left[givenString[i]]++;
            }
            for (ll i = (givenStringLength/2)+1; i < givenStringLength; i++)
            {
                right[givenString[i]]++;
            }
        }
        if(left == right) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}