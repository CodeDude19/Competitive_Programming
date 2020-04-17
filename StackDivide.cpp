#include<bits/stdc++.h>
using namespace std;
void rec_func(stack<int>&x,int index,int n)
{
  if (index<0) return;
  if(index!=(n/2)){
    int temp = x.top();
    x.pop();
    rec_func(x,index-1,n);
    x.push(temp);
  }
  else{
    x.pop();
    rec_func(x,index-1,n);
  }
}
int main()
{
  stack<int> x;
  for(int i =0;i<7;i++)x.push(i+1);
  rec_func(x,6,6);
  for(int i =0;i<6;i++){cout<<x.top();x.pop();};
  return 0;
}
