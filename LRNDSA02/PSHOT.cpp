#include <iostream>
#include <cmath>
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
        ll tries = 2 * n;
        char inp[tries] = {0};

        ll hitA = 0;
        ll balA = n;
        ll hitB = 0;
        ll balB = n;

        ll decisiveMoment = tries;

        for (ll i = 0; i < tries; i++)
        {
            cin >> inp[i];
        }
        for (ll i = 0; i < tries; i++)
        {

            if (i % 2 == 0)
            {
                hitA = inp[i] == '1' ? hitA + 1 : hitA;
                balA--;
            }
            else
            {
                hitB = inp[i] == '1' ? hitB + 1 : hitB;
                balB--;
            }

            if(hitA > hitB + balB) {
                decisiveMoment = i + 1;
                break;
            }

            if(hitB > hitA + balA) {
                decisiveMoment = i + 1;
                break;
            }
            
            if(hitA == hitB && balB == 0) {
                decisiveMoment = i + 1;
                break;
            }
          
        }
        cout << decisiveMoment << endl;
    }
    return 0;
}