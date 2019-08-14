#include<bits/stdc++.h>
using namespace std;
int coins[] = {1,2,5};
int getways(int index,int change)
{
  if(change == 0) return 1;
  if(change<0) return 0;
  if(index<=0 && change>=1) return 0;
  return getways(index-1,change) + getways(index,change - coins[index - 1]);
}
int main()
{
  int x = 5;
  int n = sizeof(coins)/sizeof(coins[0]);
  cout<<"Number of ways to reach "<<x<<" is :"<<getways(n,x);
  return 0;
}
