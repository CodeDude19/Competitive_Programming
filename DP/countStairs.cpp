long long mod =1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}/*This is a function problem.You only need to complete the function given below*/
// function to count ways to reach mth stair
long long countWays(int m){
      int dp[m+1] = {0};
      dp[0] = 1;
      dp[1] = 1;
      for(int i = 2;i<=m;i++){
        dp[i] = min(dp[i-2],dp[i-1]) + 1;
      }
      return dp[m];
}
