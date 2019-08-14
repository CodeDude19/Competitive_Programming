#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll rec_func(int n)
{
  ll sum = 1;
  if(n==0) return 0;
  for(int i = 1;i<=n;i++) sum *=(((n*(n-1))/2) + i);
  return sum + rec_func(n-1);
}
int main(){
  int t;cin>>t;
  while(t--){
    ll n;cin>>n;
    cout<<rec_func(n)<<"\n";
  }
  return 0;
}
