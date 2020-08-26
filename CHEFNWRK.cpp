#include <iostream>
#define ll long long
using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n, k;
    cin>>n>>k;
    ll inhand=0,w,count=0;
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    for(ll i=0; i<n; i++){
      w=a[i];
      if(w>k){
        cout<<-1<<endl;
        break;
      } else {
        if(k-inhand>=w){
          inhand+=w;
        } else {
          count+=1;
          inhand=w;
        }
        if(i==n-1) cout<<++count<<endl;
      }
    }
  }
  return 0;
}