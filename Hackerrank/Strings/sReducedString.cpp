#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaabccddd";
    bool notOver = true;
    while (notOver)
    {
        int j = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            ++j;
            if (s[i] == s[i + 1])
            {
                s[i] = '1';
                s[i + 1] = '1';
                break;
            }
            cout << j << " = j\n";
        }
        if (j == s.size() | s.size() <= 1)
            notOver = false;
        cout << s << " *\n";
        string y = "";
        for (int i = 0; i < s.size(); i++)
            if (s[i] != '1')
                y += s[i];
        s = y;
        cout << s << " **\n";
    }
    if (s.size() == 0)
        cout << "Empty String\n";
    else
        cout << s << "\n";
    return 0;
}