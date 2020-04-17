#include<bits/stdc++.h>
using namespace std;
void rec_func(int N)
{
  cout<<N<<" ";
  if(N<=0) return;
  rec_func(N-5);
  cout<<N<<" ";
}
int main()
{
  int N = 37;
  rec_func(N);
  return 0;
}
