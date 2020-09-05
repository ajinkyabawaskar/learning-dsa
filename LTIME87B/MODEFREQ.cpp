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
    int testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        ll num = 0;
        cin >> num;
        int arr[num] = {0};
        for (ll i = 0; i < num; i++)
            cin >> arr[i];
        unordered_map<ll, ll> occurance, modeOccurance;
        for (ll i = 0; i < num; i++)
        {
            occurance[arr[i]]++;
        }
        map<ll, ll> ordered1(occurance.begin(), occurance.end());
        for (auto i : ordered1)
        {
            // cout << "Number " << i.first << " occurred " << i.second << " times." << endl;
            modeOccurance[i.second]++;
        }
        map<ll, ll> ordered2(modeOccurance.begin(), modeOccurance.end());
        ll maxOccurance = 0;
        ll solution = 0;
        for (auto i : ordered2)
        {            
            // cout << "Mode " << i.first << " occurred " << i.second << " times." << endl;
            // cout << "Current Occuracnce "<< i.second << " max occurance " << maxOccurance << endl;
            if (i.second > maxOccurance)
            {
                // cout << "Mode " << i.first << " occurred maximum of " << i.second << " times." << endl;
                // cout << "Answer ---->" << i.first << endl;
                maxOccurance = i.second;
                solution = i.first;
            }
        }
        cout << solution << endl;
    }

    return 0;
}