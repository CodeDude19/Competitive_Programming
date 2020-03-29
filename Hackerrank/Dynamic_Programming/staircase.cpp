#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int dp[n + 1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] += dp[i - 1] + dp[i - 2];
    for (int j = 0; j <= n; j++)
        cout << dp[j] << " ";
    return 0;
}