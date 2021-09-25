#include <bits/stdc++.h>
using namespace std;
#define ll long long

int kSmallest(int arr[], int n, int k)
{
    int sum = 0;
    // Sort the given array arr in reverse
    // order.
    sort(arr, arr + n);

    // Print the first kth largest elements
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            sum += abs(arr[i]);
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n] = {0};

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                sum += a[i];
        }
        cout << sum + kSmallest(a, n, k) << endl;
    }
    return 0;
}