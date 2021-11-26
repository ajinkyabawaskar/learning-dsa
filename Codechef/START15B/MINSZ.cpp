#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
     int tests;
     cin >> tests;
     while (tests--)
     {
          ll C;
          cin >> C;

          ll cur_xor = 0;
          vector<ll> arr;

          for (int i = 60; i >= 0; i--)
          {
               ll bit1 = (1ll << i) & cur_xor;
               ll bit2 = (1ll << i) & C;

               if (bit1 != bit2)
               {
                    arr.push_back((1ll << (i + 1)) - 1);
                    cur_xor ^= (1ll << (i + 1)) - 1;
               }
          }

          if (arr.empty())
               arr = {1, 1};

          cout << arr.size() << endl;
          for (int i = 0; i < arr.size(); i++)
               cout << arr[i] << " ";
          cout << endl;
     }
     return 0;
}