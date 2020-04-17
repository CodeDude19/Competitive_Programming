// Input  : abbc
// Output : 3
// Subsequences are abc, abc and abbc
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--) {
    string str;
    cin>>str;
    int Acount = 0,Bcount = 0,Ccount = 0;
    for(int i=0;i<str.size();i++){
      if(str[i] =='a'){
        Acount = (2*Acount + 1);
      }else if(str[i] =='b'){
        Bcount = (2*Bcount + Acount);
      }else if(str[i] =='c'){
        Ccount = (2*Ccount + Bcount);
      }
    }
    cout<<"Number of Subsequences : "<<Ccount<<"\n";
  }
  return 0;
}
