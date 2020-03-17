#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> grid{"uxf", "vof", "hmp"};
    for (int i = 0; i < grid.size(); i++)
        sort(grid[i].begin(), grid[i].end());
    for (auto x : grid)
        cout << x << "\n";
    for (int i = 0; i < 5; i++)
    {
        string y = "";
        for (auto x : grid)
        {
            y += x[i];
            cout << y << "\n";
        }
        for (int i = 0; i < y.size() - 1; i++)
        {
            if (y[i] > y[i + 1])
                cout << "NO";
        }
        cout << y << " *\n";
    }
    cout << "YES";
    return 0;
}