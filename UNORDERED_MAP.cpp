#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    fast;
    string str = "Ajinkya";
    unordered_map<ll, ll> myMap;

    for (int i=0; i<str.length(); i++) {
        myMap[i]++;
    }

    for (auto x : myMap) 
      cout << x.first << " " << x.second << endl; 
}