#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                         \
   ios_base::sync_with_stdio(false); \
   cin.tie(0);                       \
   cout.tie(0);

int main()
{
   fast;
   bool flag = true;
   while(flag) {
      int num = 0;
      cin >> num;
      if(num == 42) {
         flag = false;
         break;
      } else {
      cout << num << endl;
      }
   }

   return 0;
}