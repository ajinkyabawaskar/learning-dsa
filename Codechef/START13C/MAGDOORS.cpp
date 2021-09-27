#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count;

        count = (s[0] == '0') ? 1 : 0;

        for (ll i = 0; i < s.length() - 1; i++)
        {
            if(s[i] != s[i+1]) {
                count++;
            }
        }

        cout << count << endl;
    }
}