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
        ll a, b;
        cin >> a >> b;

        ll solution = 1;
        ll count = 0;
        while (a > 0)
        {
            
            a /= pow(b, solution);
            count++;
        }
        cout << count << endl;
        
    }

    return 0;
}