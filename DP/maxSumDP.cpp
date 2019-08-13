#include<bits/stdc++.h
using namespace std;
int dpfn(int n){
  int dp[n+1]={0};
  dp[0] = 0;
  dp[1] = 1;
  for(int i=2;i<=n;i++){
    dp[i] = max((dp[i/2] + dp[i/3] + dp[i/4]),i);
  }
  for(int i=0;i<=n;i++){
    cout<<dp[i]<<" ";
  }
  return dp[n];
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    cout<<dpfn(n)<<"\n";
  }
  return 0;
}
