#include <bits/stdc++.h>
using namespace std;
int main()
{
    int u;
    cin >> u;
    for (int t = 1; t <= u; ++t)
    {
        int n, prev, curr, temp;
        string number, finalString = "";
        cin >> number;
        prev = 0;
        n = number.size();
        for (int i = 0; i < n; ++i)
        {
            curr = number[i] - '0';
            if (curr > prev)
            {
                for (int j = 0; j < curr - prev; ++j)
                {
                    finalString += '(';
                }
            }
            else if (curr < prev)
            {
                for (int j = 0; j < prev - curr; ++j)
                {
                    finalString += ')';
                }
            }
            finalString += number[i];
            prev = curr;
        }
        temp = finalString[finalString.size() - 1] - '0';
        for (int k = 0; k < temp; ++k)
        {
            finalString += ')';
        }
        cout << "Case #" << t << ": " << finalString << "\n";
    }
    return 0;
}