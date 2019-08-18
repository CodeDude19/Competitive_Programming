#include<bits/stdc++.h>
using namespace std;
int recfn(int dp[][2][3],int n,int bCount,int cCount)
{
  if(bCount<0 || cCount<0) return 0;
  if(n==0) return 1;
  else if(bCount == 0 && cCount == 0) return 1;

  if(dp[n][bCount][cCount] != -1) return dp[n][bCount][cCount];

  int res = recfn(dp,n-1,bCount,cCount);
  res += recfn(dp,n-1,bCount-1,cCount);
  res += recfn(dp,n-1,bCount,cCount-1);
  return (dp[n][bCount][cCount] = res);
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int dp[n+1][2][3]; //dp[n+1][bCount+1][cCount+1];
    memset(dp,-1,sizeof(dp));
    cout<<recfn(dp,n,1,2)<<"\n";
  }
  return 0;
}
