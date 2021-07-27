#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        ll n, k;
        cin >> n >> k;

        ll value = 0;

        ll maxUsefulSwaps = pow(2, n - 1);
        ll upto = 0;

        if (k >= maxUsefulSwaps)
        {
            upto = maxUsefulSwaps;
        }
        else
        {
            upto = k;
        }

        int last = pow(2, n) - 1;

        value += (2 * last) * upto;

        cout << value << endl;
    }

    return 0;
}