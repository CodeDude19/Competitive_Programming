#include<bits/stdc++.h>
using namespace std;
int subseq(string s,string t){
  int n = s.size(), m = t.size();
  if(m>n) return 0;
  int dp[m+1][n+1] = {0};
  //filling 0's in dp table
  for(int i=0;i<=m;i++){
    dp[i][0] = 0;
  }
  //filling 1's in dp table
  for(int j=0;j<=n;j++){
    dp[0][j]=1;
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(t[i-1]!=s[j-1]) dp[i][j] = dp[i][j-1];
      else dp[i][j] =  dp[i][j-1] + dp[i-1][j-1];
    }
  }
  return dp[m][n];
}
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--) {
    string s,t;
    cin>>s>>t;
    cout<<subseq(s,t);
  }
  return 0;
}
