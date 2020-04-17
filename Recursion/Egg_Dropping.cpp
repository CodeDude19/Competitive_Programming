#include <bits/stdc++.h>
using namespace std;
int recsoln(int e, int f)
{
    if (e == 1)
        return f;
    else if (f == 0 || f == 1)
        return f;

    int min = INT_MAX, res, i;
    for (i = 1; i <= f; i++)
    {
        res = max(recsoln(e, f - i), recsoln(e - 1, i - 1));
        if (res < min)
            min = res;
    }
    return min + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, f;
        cin >> e >> f;
        cout << recsoln(e, f) << "\n";
    }
    return 0;
}