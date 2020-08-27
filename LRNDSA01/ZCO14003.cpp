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
    ll numOfCustomers = 0;
    ll solution = -1;
    cin >> numOfCustomers;
    int budgets[numOfCustomers] = {0};
    for (ll i = 0; i < numOfCustomers; i++)
    {
        cin >> budgets[i];
    }
    ll n = sizeof(budgets) / sizeof(budgets[0]);
    sort(budgets, budgets + n);
    for (ll i = 0; i < numOfCustomers; i++)
    {
        solution = max(solution, budgets[i]*(numOfCustomers - i));
    }
    cout << solution << endl;
    return 0;
}