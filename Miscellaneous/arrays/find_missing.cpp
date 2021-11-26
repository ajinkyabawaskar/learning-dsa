// find missing number from 1 to n
// n = 10 for simplicity

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define M 16

int32_t main()
{
    fast;

    int arr[9] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int n = 10;

    // method  1 - by using sum formaula
    int sum = n * (n+1) / 2;
    int actual = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        actual += arr[i];
    }
    cout << sum -  actual << endl;

    // method 2 - bitset
    bitset<M> bset;
    bset[1] = 1;

    cout << bset << endl; 

    return 0;
}