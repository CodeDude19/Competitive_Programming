#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 10, 2, 1, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxLengthSoFar = 1;
    int currLength = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            ++currLength;
        else
        {
            if (maxLengthSoFar < currLength)
                maxLengthSoFar = currLength;
            currLength = 1;
        }
    }
    cout << maxLengthSoFar << "\n";
    return 0;
}