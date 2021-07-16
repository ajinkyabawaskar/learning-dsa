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
        ll sizeOfMatrix = 0;
        cin >> sizeOfMatrix;
        ll matrix[sizeOfMatrix][sizeOfMatrix] = {0};
        for (ll i = 0; i < sizeOfMatrix; i++)
            for (ll j = 0; j < sizeOfMatrix; j++)
                cin >> matrix[i][j];

        ll arr[sizeOfMatrix - 1] = {0};
        ll solution = 0;

        // storing whether the first row is sorted or not
        // if matrix[0][i] == i+1 then it means the element is sorted. => 1
        for (ll i = 1; i < sizeOfMatrix; i++)
            arr[i - 1] = (matrix[0][i] != (i + 1)) ? 0 : 1;

        for (ll i = sizeOfMatrix - 2; i >= 0; i--)
        {
            // if the element is unsorted, we need to swap
            if (arr[i] == 0)
            {
                solution++;
                for (ll j = i - 1; j >= 0; j--)
                    arr[j] = (arr[j] == 0) ? 1 : 0;
            }
        }
        cout << solution << endl;
    }
    return 0;
}