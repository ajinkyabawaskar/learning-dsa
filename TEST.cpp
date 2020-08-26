#include <iostream>
using namespace std;

int gloval = 10;

int prunt() {
   for (int i = 0; i < 10; i++)
   {
      if(i > 5) {
         gloval = 20;
      } 
   }
   return gloval;
}

int main() {
   
   int ans = 0;
   cout << gloval;
   ans = prunt();
   cout << ans;
   cout << gloval;
   return 0;
}
