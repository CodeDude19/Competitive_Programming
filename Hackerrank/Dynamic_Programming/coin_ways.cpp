#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int coins[] = {3, 5, 10};
    long dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j <= n; j++)
      {
        if (j >= coins[i])
        {
          dp[j] += dp[j - coins[i]];
        }
      }
    }
    cout << dp[n] << endl;
  }
  return 0;
}
