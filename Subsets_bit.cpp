#include<bits/stdc++.h>
#define vi vector<int>
#define loop(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int main(){
  vector<string> x({"A","B","C"});
  loop(i,0,8){
    cout<<"{";
    loop(j,0,8){
      if(i&(1<<j)){
        cout<<x[j]<<",";
      }
    }cout<<"}\n";
  }return 0;
}
