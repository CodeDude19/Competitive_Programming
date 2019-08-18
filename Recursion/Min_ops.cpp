#include<bits/stdc++.h>
using namespace std;
int recfn(int n){
  if (n == 0) return 0;
  if (n % 2 == 0) return 1 + recfn(n / 2);
  return 1 + recfn(n - 1);
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n;cin>>n;
    cout<<recfn(n)<<"\n";
  }
  return 0;
}
