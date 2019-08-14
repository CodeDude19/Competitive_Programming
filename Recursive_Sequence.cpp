#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void rec_func(ll n){
    ll i=1;
    ll sum = 1;
    for(int k = 2;k<=n;k++){
      vector<ll> place;
      ll pro =1;
      for(ll j = 0; j<(ll)k;j++){
        ++i;
        place.push_back(i);
      }
      for(auto x:place) pro*=x;
      sum +=pro;
    }
    cout<<sum<<"\n";
}
int main(){
  int t;cin>>t;
  while(t--){
    ll n;cin>>n;
    rec_func(n);

  }
  return 0;
}
