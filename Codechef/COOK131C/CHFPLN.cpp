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
    int t;
    cin >> t;
    while (t--)
    {
        int n, dsnt = 0;
        cin >> n;
        int arr[n], nbrcnt[100001] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            nbrcnt[arr[i]]++;
        }

        for (int i = 2; i < 100001; i++)
        {
            if (nbrcnt[i] < i - 1)
            {
                dsnt += nbrcnt[i];
            }
            else
            {
                dsnt += (i - 1);
            }
        }
        cout << dsnt << endl;
    }
    return 0;
}