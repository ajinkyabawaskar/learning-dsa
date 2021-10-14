#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n, k;
        cin >> m  >> n >> k;
        ll time_req = n * k;
        string result;
        if(time_req < m) {
            result = "YES";
        }
        else {
            result = "NO";
        }
        cout << result << endl;
    }
}