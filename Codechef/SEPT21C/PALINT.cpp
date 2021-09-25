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
        int n, x;
        cin >> n >> x;
        int arr[n] = {0};

        unordered_map<int, int> count;
        unordered_map<int, int> operations;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
            operations[arr[i]] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (x == 0) // if x = 0, then num xor 0 = num i.e. we can't change any number
            {
                break;
            }
            ll temp = arr[i] ^ x;
            count[temp]++;
            operations[temp]++;
        }

        int max = 1;
        vector<int> numbers;

        for (auto i : count)
        {
            if (i.second > max)
            {
                max = i.second;
                numbers.clear();
                numbers.push_back(i.first);
            }
            else if (i.second == max)
            {
                numbers.push_back(i.first);
            }
        }

        int minOps = INT_MAX;
        for (auto i = numbers.begin(); i != numbers.end(); ++i)
        {
            minOps = min(minOps, operations[*i]);
        }
        cout << max << " " << minOps << endl;
    }

    return 0;
}