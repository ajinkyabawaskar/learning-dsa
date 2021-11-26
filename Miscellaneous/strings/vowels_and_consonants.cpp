#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

template <class C, typename T>
bool contains(C &&c, T e)
{
    return find(begin(c), end(c), e) != end(c);
};

void solve()
{
    int v = 0, c = 0;
    string str = "ajinkya";
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < str.length(); i++)
    {
        if (contains(vowels, str[i]))
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    cout << v << endl << c << endl;
}

int32_t main()
{
    fast;
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}