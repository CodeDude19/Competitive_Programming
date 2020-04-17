#include <bits/stdc++.h>
using namespace std;
int kadane(int temp[], int n)
{
    int maxtillnow = INT_MIN, maxendinghere = 0;
    for (int i = 0; i < n; i++)
    {
        maxendinghere += temp[i];
        if (maxtillnow < maxendinghere)
            maxtillnow = maxendinghere;
        if (maxendinghere < 0)
            maxendinghere = 0;
    }
    return maxtillnow;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Row, Col;
        cin >> Row >> Col;
        int M[Row][Col];
        for (int i = 0; i < Row; i++)
            for (int j = 0; j < Col; j++)
                cin >> M[i][j];
        int maxSum = INT_MIN;
        int left, right, i;
        int temp[Row], sum, start, finish;
        for (left = 0; left < Col; ++left)
        {
            memset(temp, 0, sizeof(temp));
            for (right = left; right < Col; ++right)
            {
                for (i = 0; i < Row; ++i)
                    temp[i] += M[i][right];
                sum = kadane(temp, Row);
                if (sum > maxSum)
                    maxSum = sum;
            }
        }
        cout << maxSum << endl;
    }
    return 0;
}