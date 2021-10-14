#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool primeFactors(int n, int b)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {        
        if ( b%2 != 0){
            return false;
        }

        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            if ( b%i != 0){
                return false;
            }
            n = n/i;
           
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2 && b%n != 0)
        return false;
    
    return true;
}
 

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >>b;

        bool isValid = primeFactors(a, b);

        if (isValid)
            cout<<"YES"<<endl;
        else 
          cout <<"NO"<<endl;


     }

     return 0;
}