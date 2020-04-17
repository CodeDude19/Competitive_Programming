#include<bits/stdc++.h>
using namespace std;
int recfn(int n){
  if(n == 0 || n == 1) return n;
  else return max((recfn(n/2) + recfn(n/3) + recfn(n/4)),n);
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    cout<<recfn(n)<<"\n";
  }
  return 0;
}
