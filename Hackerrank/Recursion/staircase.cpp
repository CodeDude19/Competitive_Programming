#include <bits/stdc++.h>
using namespace std;
int recfn(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return recfn(n - 2) + recfn(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << recfn(n);
    return 0;
}