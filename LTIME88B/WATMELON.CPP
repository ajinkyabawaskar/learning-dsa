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
       int N ;
		cin >> N ;

		int B[N];
		for( int i = 0 ; i < N ; i++ ){
			cin >> B[i] ;
		}

		int sum = 0 ;
		for( int i = 0 ; i < N ; i++ ){
			sum = sum + B[i];
		}

		if(sum < 0) {
			cout << "NO" << endl ;		
		}else if( sum >= 0 ){
			cout << "YES" << endl ;
		}
    }

    return 0;
}