#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    for(int i = n;i>=1;i--){
      if((i&(i-1)) == 0){
        cout<<i;
        break;
      }
    }cout<<"\n";
  }

  return 0;
}
