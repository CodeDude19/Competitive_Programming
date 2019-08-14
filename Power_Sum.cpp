#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
int rec_func(int x,int n,vi& track){
  int sum = 0;
  for(auto i:track)sum+=pow(i,n);
  if (sum == x) return 1;
  else{
    int v,answer = 0;
    v = track.empty() ? 1:track.back()+1;
    while((sum + pow(v,n))<=x){
      track.push_back(v);
      answer += rec_func(x,n,track);
      track.pop_back();
      v++;
    }
    return answer;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,n;
    cin>>x>>n;
    vi track;
    cout<<rec_func(x,n,track)<<"\n";
  }
  return 0;
}
