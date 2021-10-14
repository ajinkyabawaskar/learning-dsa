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
        int overs = 0,
            bowlers = 0,
            capacity = 0;
        cin >> overs >> bowlers >> capacity;

        int maxCapacity = bowlers * capacity;

        if (bowlers == 1 && overs > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (overs <= maxCapacity)
            {

                // num of times loop
                int loopMe = overs / bowlers;
                int leftOvers = overs % bowlers;

                for (int i = 0; i < loopMe; i++)
                {
                    for (int j = 0; j < bowlers; j++)
                    {
                        cout << j + 1 << " ";
                    }
                }

                for (int i = 0; i < leftOvers; i++)
                {
                    cout << i + 1 << " ";
                }

                cout << endl;
            }

            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}