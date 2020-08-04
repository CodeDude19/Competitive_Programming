#include<bits/stdc++.h>
using namespace std;
string func(string str){
    if(str.size()==1) return "NO";
    int countarr[26] = {0};
    for(int i=0;i<str.size();i++) countarr[(int)str[i]-97]+=1;
    for(int i=0;i<26;i++){
        if(countarr[i]>0){
            if(countarr[i]%2!=0) return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str;cin>>str;
        cout<<func(str)<<"\n";
    }   
    return 0;
}