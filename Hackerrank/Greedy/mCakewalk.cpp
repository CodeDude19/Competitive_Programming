#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> calorie{7, 4, 9, 6};
    long int i = 0;
    long int f = 0;
    sort(calorie.begin(), calorie.end(), greater<int>());
    for (auto x : calorie)
    {
        f += pow(2, i++) * x;
    }
    cout << f << "\n";
    return 0;
}