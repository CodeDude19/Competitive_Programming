#include<bits/stdc++.h>
using namespace std;
int subseq(string s,string t,int n,int m){
  if(m==0) return 1;
  else if(n==0) return 0;
  else if(s[n-1]!=t[m-1]) return subseq(s,t,n-1,m);
  else return subseq(s,t,n-1,m) + subseq(s,t,n-1,m-1);
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    string s,t;
    cin>>s>>t;
    int n = s.size() , m = t.size();
    cout<<subseq(s,t,n,m)<<"\n";
  }
  return 0;
}
