#include <bits/stdc++.h>
using namespace std;
int main()
{
    int u;
    cin >> u;
    for (int t = 0; t < u; t++)
    {
        int n;
        cin >> n;
        int arr[101][101];
        int cols[101][101] = {0};
        int rows[101][101] = {0};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                cols[j][arr[i][j]]++;
                rows[i][arr[i][j]]++;
            }
        int RRows = 0;
        int RCols = 0;
        for (int i = 0; i < n; i++)
        {
            bool fR = 0;
            bool fC = 0;
            for (int j = 0; j <= n; j++)
            {
                if ((fR == 0) && (rows[i][j] > 1))
                {
                    RRows++;
                    fR = 1;
                }

                if ((fC == 0) && (cols[i][j] > 1))
                {
                    RCols++;
                    fC = 1;
                }
            }
        }
        int Dsum = 0;
        for (int i = 0; i < n; i++)
            Dsum += arr[i][i];
        cout << "Case #" << t + 1 << ": " << Dsum << " " << RRows << " " << RCols << endl;
    }
    return 0;
}