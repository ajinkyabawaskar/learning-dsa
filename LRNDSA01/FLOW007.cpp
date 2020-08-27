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
        string num = "";
        cin >> num;
        reverse(num.begin(), num.end());
        stringstream num2(num);
        int ans = 0;
        num2 >> ans;
        cout << ans << endl;
    }

    return 0;
}