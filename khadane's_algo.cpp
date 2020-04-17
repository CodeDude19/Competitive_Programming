#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define loop(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int main()
{
  vi arr({-1,2,4,-3,5,2,-5,2});
  int best = 0,sum = 0;
  loop(i,0,arr.size())
  {
    sum = max(arr[i],sum+arr[i]);
    best = max(sum,best);
  }
  cout<<best;
  return 0;
}
