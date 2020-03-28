#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int coins[] = {1, 2, 3, 4, 5};
        int amount;
        cin >> amount;
        int dp[amount + 1];
        memset(dp, amount + 1, sizeof(dp));
        dp[0] = 0;
        for (int i = 1; i < amount + 1; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (coins[j] <= i)
                {
                    int sub_res = dp[i - coins[j]];
                    if (sub_res != INT_MAX && sub_res + 1 < dp[i])
                        dp[i] = sub_res + 1;
                }
            }
        }

        cout << dp[amount] << "\n";
    }
    return 0;
}