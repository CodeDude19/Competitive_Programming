#include<bits/stdc++.h>
using namespace std;
int countPaths(int n, int m)
{
    int dp[n+1][m+1];

    // Fill entries in bottommost row and leftmost
    // columns
    for (int i=0; i<=n; i++)
      dp[i][0] = 1;
    for (int i=0; i<=m; i++)
      dp[0][i] = 1;

    // Fill DP in bottom up manner
    for (int i=1; i<=n; i++)
       for (int j=1; j<=m; j++)
          dp[i][j] = dp[i-1][j] + dp[i][j-1];
    return dp[n][m];
}

// Driver Code
int main()
{
    int n = 3, m = 2;
    cout << " Number of Paths " << countPaths(n, m);
    return 0;
}
