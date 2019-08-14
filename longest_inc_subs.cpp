#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ar[]={6,2,5,1,7,4,8,3};
  int n = sizeof(ar)/sizeof(ar[0]);
  int ar2[n] = {0};
  int ar3[n] = {0};
  for(int i=0;i<n;i++){
    ar2[i] = 1;
    for(int j=0;j<i;j++){
      if (ar[j]<ar[i]) ar2[i] = max(ar2[i],ar2[j]+1);
      if(ar2[i]>(ar2[j] + 1)) ar3[i] = 1;
      else ar3[j] = 1;
    }
  }
  cout<<ar2[n-1];
  for(int i = 0;i<n;i++) cout<< ".."<<ar2[i];
  return 0;
}
