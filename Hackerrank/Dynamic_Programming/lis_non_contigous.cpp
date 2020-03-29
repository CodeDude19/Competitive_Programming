#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 3, 4, 5, 2, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dp[n] = {0};
    for (int i = 0; i < n; i++)
        dp[i] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
    return 0;
}