#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll a, b, c = 0;
        cin >> a >> b >> c;
        int right = 0;
        int left = 0;
        if(a==0)  {
            right++;
        }
        else {
            left++;
        }
        if(b==0) {
            right++;
        }
        else {
            left++;
        }
        if(c==0) {
            right++;
        }
        else {
            left++;
        }

        if(right >= 1 && left >= 1) {
            cout << 1;
        }
        else {
            cout << 0;
        }
        
        cout << endl;
    }

    return 0;
}