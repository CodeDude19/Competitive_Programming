#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "helloWorldIamGood";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
        if ((int)s[i] < 97)
            count++;
    cout << count + 1 << "\n";
    return 0;
}