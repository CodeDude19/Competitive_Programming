#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int n, CEnd, PEnd;
        bool flag = true;
        CEnd = PEnd = 0;
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> Q;
        cin >> n;
        string ans;
        for (int i = 0; i < n; ++i)
        {
            int start, end;
            cin >> start >> end;
            ans.push_back('C');
            Q.emplace(start, end, i);
        }
        while (!Q.empty())
        {
            int start = get<0>(Q.top());
            int end = get<1>(Q.top());
            int i = get<2>(Q.top());
            Q.pop();
            if (CEnd <= start)
            {
                ans[i] = 'C';
                CEnd = end;
            }
            else if (PEnd <= start)
            {
                ans[i] = 'J';
                PEnd = end;
            }
            else
            {
                flag = false;
                break;
            }
        }
        cout << "Case #" << t << ": ";
        if (flag)
            cout << ans << "\n";
        else
            cout << "IMPOSSIBLE\n";
    }
    return 0;
}