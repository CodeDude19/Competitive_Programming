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
        int dp[n + 1] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++)
            for (int j = 1; j <= i; j++)
                dp[i] += dp[j - 1] * dp[i - j];
        cout << dp[n] << "\n";
    }
    return 0;
}