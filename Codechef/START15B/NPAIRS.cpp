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
    fast; //fast execution for cp
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        
        string s;
        cin>>s;

        map<int, int> d;
        map<int, int> d1;
        
        for(int i =0; i < n; i++) {
            d[i - (s[i] - 48)] += 1;
            d1[i + (s[i] - 48)] += 1;
        }
        
        int m1 = 0;
        int m2 = 0;
        
        for(auto i : d) {
            m1 += i.second * (i.second-1)/2;
        }
        
        for(auto i : d1) {
            m2 += i.second * (i.second-1)/2;
        }
        
        cout << m1 + m2 << endl;
    }
 
 
    return 0;
}