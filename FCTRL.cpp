#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t,count,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      count = 0;
      while(n>=5)
      {
          count +=n/5;
          n /=5;
      }
      cout<<count<<'\n';
  }
}
