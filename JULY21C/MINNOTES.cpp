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
        int n = 0;
        cin >> n;
        int arr[n];

        int maxNotes = 0;
        int minNotes = 0;

        int largest  = -1;
        int largestIndex  = -1;

        int smallest = INT_MAX;
        int smallestIndex = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            // calculate total rupees
            maxNotes += arr[i];

            // get largest
            if(arr[i] > largest) {
                largest = arr[i];
                largestIndex = i;
            }

            // get smallest
            if(arr[i] < smallest) {
                smallest = arr[i];
                smallestIndex = i;
            }
        }
        
        
        cout << minNotes << endl;
    }
    return 0;
}