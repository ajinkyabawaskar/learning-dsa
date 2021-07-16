#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define pb push_back
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        string s, p;
        cin >> s >> p;
        unordered_map<ll, ll> m, m1;
        for (ll i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            m1[s[i]]++;
        }
        for (ll i = 0; i < p.length(); i++)
        {
            m[p[i]]--;
            m1[p[i]]--;
        }
        sort(s.begin(), s.end());
        string ss = "", ss1 = "";
        ll flag = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (m[s[i]] > 0)
            {
                ss += s[i];
                m[s[i]]--;
            }
            if (p[0] == s[i] && m[s[i]] == 0 && flag == 0)
            {
                ss += p;
                flag = 1;
            }
        }
        flag = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (m1[s[i]] > 0)
            {
                ss1 += s[i];
                m1[s[i]]--;
            }
        }
        string ans = "", l = "", r = "";
        for (ll i = 0; i < ss1.length(); i++)
        {
            if (ss1[i] == p[0])
            {
                l = ss1.substr(0, i);
                r = ss1.substr(i, s.length());
                i = ss1.length() + 100;
                break;
            }
        }
        ans = l + p + r;
        cout << min(ss, ans) << endl;
    }
}