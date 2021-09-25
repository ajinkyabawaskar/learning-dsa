#include <bits/stdc++.h>

using namespace std;

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if ((int)floor(wt[n - 1] / 2) > W)
        return knapSack(W, wt, val, n - 1);

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return max(
            val[n - 1] + knapSack(W - (int)floor(wt[n - 1] / 2), wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}

int knapSack2(int m, int p[], int v[], int n)
{
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            dp[i][j] = dp[i - 1][j]; // when i th pple not taken
            if (j >= (int)floor(p[i - 1] / 2))
            {
                int rPrice = j - (int)floor(p[i - 1] / 2);
                if (dp[i - 1][rPrice] + v[i - 1] > dp[i - 1][j])
                {
                    dp[i][j] = dp[i-1][rC]
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int v[n], p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cin >> p[i];
        }
        int solution = knapSack2(m, p, v, n);
        cout << solution << endl;
    }
}