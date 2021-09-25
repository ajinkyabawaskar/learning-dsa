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
        ll solution = 0;
        ll N, A, B;
        cin >> N >> A >> B;

        char str;
        for(ll i =0; i < N; i++) {
            cin >> str;
            if(str == '0') {
                solution += A;
            }
            if(str == '1') {
                solution += B;
            }
        }
        
        cout << solution << endl;
    }

    return 0;
}