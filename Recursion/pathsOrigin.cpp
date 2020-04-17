#include<bits/stdc++.h>
using namespace std;
int recfn(int n,int m){
  if(n == 0 || m == 0) return 1;
  return recfn(n-1,m) + recfn(n,m-1);
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n,m;
    cin>>n>>m;
    cout<<recfn(n,m)<<"\n";
  }
  return 0;
}
