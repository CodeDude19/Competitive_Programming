#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size() + 1, m = s2.size() + 1;
        int dp[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                dp[i][j] = 0;
        for (int i = 0; i < m; i++)
            dp[0][i] = i;
        for (int j = 0; j < n; j++)
            dp[j][0] = j;

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    int temp = min(dp[i - 1][j], dp[i][j - 1]);
                    dp[i][j] = min(dp[i - 1][j - 1], temp) + 1;
                }
            }
        }
        cout << dp[n - 1][m - 1] << "\n";
    }
    return 0;
}