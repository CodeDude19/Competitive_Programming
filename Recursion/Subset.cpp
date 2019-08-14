#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define loop(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int n = 5;
vi subset;
void search(int k)
{
  if(k == n+1)
  {
    loop(i,0,subset.size())
    {
      cout<<subset[i];
    }
    cout<<"\n";
  }
  else
  {
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
    search(k+1);
  }
}
int main()
{
  search(1);
  return 0;
}
